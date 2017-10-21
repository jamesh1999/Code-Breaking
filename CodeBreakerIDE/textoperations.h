#ifndef TEXTOPERATIONS_H
#define TEXTOPERATIONS_H

#include <QTextCursor>

//Global text formats to indicate status
extern QTextCharFormat success;
extern QTextCharFormat failure;
extern QTextCharFormat ongoing;
extern QTextCharFormat normal;

//Setup the formats
void InitFormats();

//Swaps rows/columns when writing the text out in n columns
void RowColumn(QTextCursor*, int);

//Removes all whitespace
void StripWhitespace(QTextCursor*);

//Copies the whitespace from one text to another
void CloneWhitespace(QTextCursor*, int, int);

//Copies punctuation and whitespace from one text to another
void ClonePunctuation(QTextCursor*, int, int);

//Reformats the message in a grid with n columns
void TableFormat(QTextCursor*, int);

//Reverses the characters in the text
void ReverseText(QTextCursor*);

#endif // TEXTOPERATIONS_H
