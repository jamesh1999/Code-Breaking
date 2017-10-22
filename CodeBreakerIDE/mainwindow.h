#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>
#include <QTextCursor>
#include <QString>
#include <QMetaObject>
#include <QShortcut>
#include <vector>
#include "Cipher.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void ArgumentInput(QString);

private slots:

    //Manipulation actions
    void on_actionSwap_row_column_triggered();
    void SwapRowColumnSlot(QString);

    void on_actionClone_whitespace_triggered();
    void CloneWhitespaceSlot(QString);

    void on_actionClone_punctuation_triggered();
    void ClonePunctuationSlot(QString);

    void ArgumentInputEscaped();

    void on_argumentInput_returnPressed();

    void on_actionStrip_whitespace_triggered();

    void on_actionTable_format_triggered();
    void TableFormatSlot(QString);

    void on_actionReverse_text_triggered();

	void on_actionDecrypt_triggered();

public slots:
	void DecryptionResult(QString);

private:

    //UI
    Ui::MainWindow *ui;
    QProgressBar* statusProgress;
    QWidget* tooltip;

    //Argument bar
    QMetaObject::Connection argumentConnection;
    QShortcut* argumentEscape;

    //Buffers
    QTextCursor textCursor;
    int selectionStartBuff;
    int selectionEndBuff;

    void GetArgumentInput(void (MainWindow::*func)(QString));
    void ClearFormatting();
};

#endif // MAINWINDOW_H
