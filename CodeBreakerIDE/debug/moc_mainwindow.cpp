/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "ArgumentInput"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 34), // "on_actionSwap_row_column_trig..."
QT_MOC_LITERAL(4, 61, 17), // "SwapRowColumnSlot"
QT_MOC_LITERAL(5, 79, 35), // "on_actionClone_whitespace_tri..."
QT_MOC_LITERAL(6, 115, 19), // "CloneWhitespaceSlot"
QT_MOC_LITERAL(7, 135, 36), // "on_actionClone_punctuation_tr..."
QT_MOC_LITERAL(8, 172, 20), // "ClonePunctuationSlot"
QT_MOC_LITERAL(9, 193, 20), // "ArgumentInputEscaped"
QT_MOC_LITERAL(10, 214, 30), // "on_argumentInput_returnPressed"
QT_MOC_LITERAL(11, 245, 35), // "on_actionStrip_whitespace_tri..."
QT_MOC_LITERAL(12, 281, 31), // "on_actionTable_format_triggered"
QT_MOC_LITERAL(13, 313, 15), // "TableFormatSlot"
QT_MOC_LITERAL(14, 329, 31), // "on_actionReverse_text_triggered"
QT_MOC_LITERAL(15, 361, 26), // "on_actionDecrypt_triggered"
QT_MOC_LITERAL(16, 388, 16) // "DecryptionResult"

    },
    "MainWindow\0ArgumentInput\0\0"
    "on_actionSwap_row_column_triggered\0"
    "SwapRowColumnSlot\0on_actionClone_whitespace_triggered\0"
    "CloneWhitespaceSlot\0"
    "on_actionClone_punctuation_triggered\0"
    "ClonePunctuationSlot\0ArgumentInputEscaped\0"
    "on_argumentInput_returnPressed\0"
    "on_actionStrip_whitespace_triggered\0"
    "on_actionTable_format_triggered\0"
    "TableFormatSlot\0on_actionReverse_text_triggered\0"
    "on_actionDecrypt_triggered\0DecryptionResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   92,    2, 0x08 /* Private */,
       4,    1,   93,    2, 0x08 /* Private */,
       5,    0,   96,    2, 0x08 /* Private */,
       6,    1,   97,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    1,  101,    2, 0x08 /* Private */,
       9,    0,  104,    2, 0x08 /* Private */,
      10,    0,  105,    2, 0x08 /* Private */,
      11,    0,  106,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ArgumentInput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_actionSwap_row_column_triggered(); break;
        case 2: _t->SwapRowColumnSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_actionClone_whitespace_triggered(); break;
        case 4: _t->CloneWhitespaceSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_actionClone_punctuation_triggered(); break;
        case 6: _t->ClonePunctuationSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->ArgumentInputEscaped(); break;
        case 8: _t->on_argumentInput_returnPressed(); break;
        case 9: _t->on_actionStrip_whitespace_triggered(); break;
        case 10: _t->on_actionTable_format_triggered(); break;
        case 11: _t->TableFormatSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_actionReverse_text_triggered(); break;
        case 13: _t->on_actionDecrypt_triggered(); break;
        case 14: _t->DecryptionResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::ArgumentInput)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::ArgumentInput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
