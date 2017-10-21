#include "textoperations.h"
#include <string>
#include <vector>
#include <QTextCharFormat>
#include <QColor>
#include <regex>
#include <iostream>

QTextCharFormat success;
QTextCharFormat failure;
QTextCharFormat ongoing;
QTextCharFormat normal;

void InitFormats()
{
    success.setForeground(QColor(0x44bba4));
    failure.setForeground(QColor(0xe94f37));
    ongoing.setForeground(QColor(0x3f88c5));
    normal.setForeground(QColor(0xf6f7eb));
}

void RowColumn(QTextCursor* cursor, int len)
{
    std::string txt = cursor->selectedText().replace("\u2029", "\n").toStdString();
    std::vector<std::string> buffers;
    buffers.resize(len);

    for(unsigned i = 0; i < txt.size(); ++i)
        buffers[i % len] += txt[i];

    std::string result;
    for(int i = 0; i < len; ++i)
        result += buffers[i];

    cursor->beginEditBlock();
    cursor->removeSelectedText();
    cursor->setCharFormat(success);
    cursor->insertText(QString::fromStdString(result));
    cursor->setCharFormat(normal);
    cursor->endEditBlock();
}

void CloneWhitespace(QTextCursor* cursor, int textStart, int textEnd)
{
    std::string tmpl = cursor->selectedText().replace("\u2029", "\n").toStdString();
    cursor->setPosition(textEnd);
    cursor->setPosition(textStart, QTextCursor::KeepAnchor);
    std::string txt = cursor->selectedText().replace("\u2029", "\n").toStdString();

    std::string result;
    unsigned i = 0, j = 0;
    while(i < txt.size())
    {
        //Match on whitespace
        if(j < tmpl.size()
           && (tmpl[j] == ' '
           || tmpl[j] == '\t'
           || tmpl[j] == '\r'
           || tmpl[j] == '\n'))
        {
            result += tmpl[j];
            ++j;
            continue;
        }

        result += txt[i];
        ++i;
        ++j;
    }

    cursor->beginEditBlock();
    cursor->removeSelectedText();
    cursor->setCharFormat(success);
    cursor->insertText(QString::fromStdString(result));
    cursor->setCharFormat(normal);
    cursor->endEditBlock();
}

void ClonePunctuation(QTextCursor* cursor, int textStart, int textEnd)
{
    std::string tmpl = cursor->selectedText().replace("\u2029", "\n").toStdString();
    cursor->setPosition(textEnd);
    cursor->setPosition(textStart, QTextCursor::KeepAnchor);
    std::string txt = cursor->selectedText().replace("\u2029", "\n").toStdString();

    std::string result;
    unsigned i = 0, j = 0;
    while(i < txt.size())
    {
        //Match on non-alphanumeric
        if(j < tmpl.size()
           && !(tmpl[j] >= 'A' && tmpl[j] <= 'Z')
           && !(tmpl[j] >= 'a' && tmpl[j] <= 'z')
           && !(tmpl[j] >= '0' && tmpl[j] <= '9'))
        {
            result += tmpl[j];
            ++j;
            continue;
        }

        result += txt[i];
        ++i;
        ++j;
    }

    cursor->beginEditBlock();
    cursor->removeSelectedText();
    cursor->setCharFormat(success);
    cursor->insertText(QString::fromStdString(result));
    cursor->setCharFormat(normal);
    cursor->endEditBlock();
}

void StripWhitespace(QTextCursor* cursor)
{
    //Match whitespace
    std::regex e("[\\s]");
    std::string txt = cursor->selectedText().replace("\u2029", "\n").toStdString();
    txt = std::regex_replace(txt, e, "");

    cursor->beginEditBlock();
    cursor->removeSelectedText();
    cursor->setCharFormat(success);
    cursor->insertText(QString::fromStdString(txt));
    cursor->setCharFormat(normal);
    cursor->endEditBlock();
}

void TableFormat(QTextCursor* cursor, int len)
{
    std::string txt = cursor->selectedText().replace("\u2029", "").toStdString();
    std::string result;
    for(unsigned i = 0; i < txt.size(); ++i)
    {
        if(i && i % len == 0)
            result += '\n';
        result += txt[i];
    }

    cursor->beginEditBlock();
    cursor->removeSelectedText();
    cursor->setCharFormat(success);
    cursor->insertText(QString::fromStdString(result));
    cursor->setCharFormat(normal);
    cursor->endEditBlock();
}

void ReverseText(QTextCursor* cursor)
{
    std::string txt = cursor->selectedText().replace("\u2029", "\n").toStdString();
    std::string reversed;
    for(auto it = txt.end() - 1; it >= txt.begin(); --it)
        reversed += *it;

    cursor->beginEditBlock();
    cursor->removeSelectedText();
    cursor->setCharFormat(success);
    cursor->insertText(QString::fromStdString(reversed));
    cursor->setCharFormat(normal);
    cursor->endEditBlock();
}
