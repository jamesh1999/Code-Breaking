/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSwap_row_column;
    QAction *actionClone_whitespace;
    QAction *actionClone_punctuation;
    QAction *actionReverse_text;
    QAction *actionTable_format;
    QAction *actionAdd_spaces;
    QAction *actionConvert_alphabet;
    QAction *actionFilter_characters;
    QAction *actionDecrypt;
    QAction *actionEncrypt;
    QAction *actionAnalyze;
    QAction *actionExit;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionPreferences;
    QAction *actionStrip_whitespace;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *mainText;
    QLineEdit *argumentInput;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuOptions;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 1000);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSwap_row_column = new QAction(MainWindow);
        actionSwap_row_column->setObjectName(QStringLiteral("actionSwap_row_column"));
        actionClone_whitespace = new QAction(MainWindow);
        actionClone_whitespace->setObjectName(QStringLiteral("actionClone_whitespace"));
        actionClone_punctuation = new QAction(MainWindow);
        actionClone_punctuation->setObjectName(QStringLiteral("actionClone_punctuation"));
        actionReverse_text = new QAction(MainWindow);
        actionReverse_text->setObjectName(QStringLiteral("actionReverse_text"));
        actionTable_format = new QAction(MainWindow);
        actionTable_format->setObjectName(QStringLiteral("actionTable_format"));
        actionAdd_spaces = new QAction(MainWindow);
        actionAdd_spaces->setObjectName(QStringLiteral("actionAdd_spaces"));
        actionConvert_alphabet = new QAction(MainWindow);
        actionConvert_alphabet->setObjectName(QStringLiteral("actionConvert_alphabet"));
        actionFilter_characters = new QAction(MainWindow);
        actionFilter_characters->setObjectName(QStringLiteral("actionFilter_characters"));
        actionDecrypt = new QAction(MainWindow);
        actionDecrypt->setObjectName(QStringLiteral("actionDecrypt"));
        actionEncrypt = new QAction(MainWindow);
        actionEncrypt->setObjectName(QStringLiteral("actionEncrypt"));
        actionAnalyze = new QAction(MainWindow);
        actionAnalyze->setObjectName(QStringLiteral("actionAnalyze"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QStringLiteral("actionZoom_In"));
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QStringLiteral("actionZoom_Out"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionStrip_whitespace = new QAction(MainWindow);
        actionStrip_whitespace->setObjectName(QStringLiteral("actionStrip_whitespace"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QLatin1String("#centralWidget\n"
"{\n"
"background: #0f0f1d;\n"
"}"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mainText = new QTextEdit(centralWidget);
        mainText->setObjectName(QStringLiteral("mainText"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        mainText->setFont(font);
        mainText->setStyleSheet(QLatin1String("QTextEdit\n"
"{\n"
"border: none;\n"
"\n"
"color: #f6f7eb;\n"
"background-color: #0f0f1d;\n"
"\n"
"selection-color: #0f0f1d;\n"
"selection-background-color: #3f88c5;\n"
"}"));

        gridLayout->addWidget(mainText, 0, 0, 1, 1);

        argumentInput = new QLineEdit(centralWidget);
        argumentInput->setObjectName(QStringLiteral("argumentInput"));
        argumentInput->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(argumentInput->sizePolicy().hasHeightForWidth());
        argumentInput->setSizePolicy(sizePolicy);
        argumentInput->setMaximumSize(QSize(16777215, 99999));

        gridLayout->addWidget(argumentInput, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionSwap_row_column);
        menuEdit->addAction(actionReverse_text);
        menuEdit->addAction(actionTable_format);
        menuEdit->addAction(actionConvert_alphabet);
        menuEdit->addAction(actionFilter_characters);
        menuEdit->addAction(actionStrip_whitespace);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAdd_spaces);
        menuEdit->addAction(actionClone_whitespace);
        menuEdit->addAction(actionClone_punctuation);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDecrypt);
        menuEdit->addAction(actionEncrypt);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAnalyze);
        menuOptions->addAction(actionZoom_In);
        menuOptions->addAction(actionZoom_Out);
        menuOptions->addAction(actionPreferences);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save...", Q_NULLPTR));
        actionSwap_row_column->setText(QApplication::translate("MainWindow", "Swap row/column", Q_NULLPTR));
        actionClone_whitespace->setText(QApplication::translate("MainWindow", "Clone whitespace", Q_NULLPTR));
        actionClone_punctuation->setText(QApplication::translate("MainWindow", "Clone punctuation", Q_NULLPTR));
        actionReverse_text->setText(QApplication::translate("MainWindow", "Reverse text", Q_NULLPTR));
        actionTable_format->setText(QApplication::translate("MainWindow", "Table format", Q_NULLPTR));
        actionAdd_spaces->setText(QApplication::translate("MainWindow", "Add spaces", Q_NULLPTR));
        actionConvert_alphabet->setText(QApplication::translate("MainWindow", "Convert alphabet", Q_NULLPTR));
        actionFilter_characters->setText(QApplication::translate("MainWindow", "Filter characters", Q_NULLPTR));
        actionDecrypt->setText(QApplication::translate("MainWindow", "Decrypt...", Q_NULLPTR));
        actionEncrypt->setText(QApplication::translate("MainWindow", "Encrypt...", Q_NULLPTR));
        actionAnalyze->setText(QApplication::translate("MainWindow", "Analyze", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionZoom_In->setText(QApplication::translate("MainWindow", "Zoom In", Q_NULLPTR));
        actionZoom_Out->setText(QApplication::translate("MainWindow", "Zoom Out", Q_NULLPTR));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences...", Q_NULLPTR));
        actionStrip_whitespace->setText(QApplication::translate("MainWindow", "Strip whitespace", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
