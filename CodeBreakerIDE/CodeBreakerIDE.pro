#-------------------------------------------------
#
# Project created by QtCreator 2017-10-20T18:37:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CodeBreakerIDE
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    textoperations.cpp \
    SimpleSubstitution.cpp \
    Globals.cpp

HEADERS  += mainwindow.h \
    textoperations.h \
    SimpleSubstitution.h \
    Bigrams.h \
    Globals.h \
    Quadgrams.h \
    Trigrams.h \
    Cipher.h

FORMS    += mainwindow.ui \
    SimpleSubstitution.ui
