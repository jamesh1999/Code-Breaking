#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QShortcut>
#include "textoperations.h"
#include "SimpleSubstitution.h"
#include <iostream>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Hide input bar
    ui->argumentInput->setMaximumSize(QSize(0,0));
    //Create progress bar
    statusProgress = new QProgressBar;
    statusProgress->setFixedWidth(200);
    ui->statusBar->addPermanentWidget(statusProgress);

    InitFormats();

    //Set up hotkeys
    QShortcut* shortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_S), this);
    connect(shortcut, &QShortcut::activated, this, &MainWindow::on_actionSwap_row_column_triggered);
    delete shortcut;

    shortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_W), this);
    connect(shortcut, &QShortcut::activated, this, &MainWindow::on_actionStrip_whitespace_triggered);
    delete shortcut;

    shortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_P), this);
    connect(shortcut, &QShortcut::activated, this, &MainWindow::on_actionClone_punctuation_triggered);
    delete shortcut;

    argumentEscape = new QShortcut(QKeySequence(Qt::Key_Escape), this);
    connect(argumentEscape, &QShortcut::activated, this, &MainWindow::ArgumentInputEscaped);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete statusProgress;
    delete argumentEscape;
}

/*
 * Shows input bar
 * func - Slot to call on argument entered
 */
void MainWindow::GetArgumentInput(void (MainWindow::*func)(QString))
{
    disconnect(argumentConnection);
    argumentConnection = connect(this, &MainWindow::ArgumentInput, this, func);
    ui->argumentInput->setMaximumSize(QSize(99999, 99999));
    ui->argumentInput->setFocus();
}

void MainWindow::on_actionSwap_row_column_triggered()
{
    ClearFormatting();
    textCursor = QTextCursor(ui->mainText->textCursor());
    GetArgumentInput(&MainWindow::SwapRowColumnSlot);
}

void MainWindow::SwapRowColumnSlot(QString arg)
{
    RowColumn(&textCursor, arg.toInt());
}

void MainWindow::on_actionClone_whitespace_triggered()
{
    selectionStartBuff = ui->mainText->textCursor().selectionStart();
    selectionEndBuff = ui->mainText->textCursor().selectionEnd();
    GetArgumentInput(&MainWindow::CloneWhitespaceSlot);
}

void MainWindow::CloneWhitespaceSlot(QString)
{
    disconnect(argumentConnection);
    textCursor = QTextCursor(ui->mainText->textCursor());
    CloneWhitespace(&textCursor, selectionStartBuff, selectionEndBuff);
}

void MainWindow::on_actionClone_punctuation_triggered()
{
    selectionStartBuff = ui->mainText->textCursor().selectionStart();
    selectionEndBuff = ui->mainText->textCursor().selectionEnd();
    GetArgumentInput(&MainWindow::ClonePunctuationSlot);
}

void MainWindow::ClonePunctuationSlot(QString)
{
    disconnect(argumentConnection);
    textCursor = QTextCursor(ui->mainText->textCursor());
    ClonePunctuation(&textCursor, selectionStartBuff, selectionEndBuff);
}

void MainWindow::ArgumentInputEscaped()
{
    ui->argumentInput->setMaximumSize(QSize(0,0));
    ui->argumentInput->deselect();
    disconnect(argumentConnection);
}

void MainWindow::on_argumentInput_returnPressed()
{
    emit ArgumentInput(ui->argumentInput->text());
    ui->argumentInput->deselect();
    ui->argumentInput->setMaximumSize(QSize(0,0));
    disconnect(argumentConnection);
}

//This is pretty nasty but it copies the plaintext and reinserts it so that all colours are cleared
//Selection is maintained during this operation
void MainWindow::ClearFormatting()
{
    int start = ui->mainText->textCursor().selectionStart();
    int end = ui->mainText->textCursor().selectionEnd();
    QString txt = ui->mainText->toPlainText();

    QTextCursor cursor(ui->mainText->textCursor());
    cursor.select(QTextCursor::SelectionType::Document);
    cursor.removeSelectedText();
    cursor.setCharFormat(normal);
    cursor.insertText(txt);
    cursor.setPosition(start);
    cursor.setPosition(end, QTextCursor::KeepAnchor);
    ui->mainText->setTextCursor(cursor);
}

void MainWindow::on_actionStrip_whitespace_triggered()
{
    ClearFormatting();
    textCursor = QTextCursor(ui->mainText->textCursor());
    StripWhitespace(&textCursor);
}

void MainWindow::on_actionTable_format_triggered()
{
    ClearFormatting();
    textCursor = QTextCursor(ui->mainText->textCursor());
    GetArgumentInput(&MainWindow::TableFormatSlot);
}

void MainWindow::TableFormatSlot(QString arg)
{
    TableFormat(&textCursor, arg.toInt());
}

void MainWindow::on_actionReverse_text_triggered()
{
    ClearFormatting();
    textCursor = QTextCursor(ui->mainText->textCursor());
    ReverseText(&textCursor);
}
