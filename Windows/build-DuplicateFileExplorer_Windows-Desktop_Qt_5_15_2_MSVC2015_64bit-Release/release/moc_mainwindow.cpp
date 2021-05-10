/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../DuplicateFileExplorer_src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "SetUiData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "searchLocation"
QT_MOC_LITERAL(4, 37, 23), // "quickDuplicateCheck_chk"
QT_MOC_LITERAL(5, 61, 13), // "SetDialogData"
QT_MOC_LITERAL(6, 75, 8), // "fileName"
QT_MOC_LITERAL(7, 84, 29), // "on_searchLocation_btn_clicked"
QT_MOC_LITERAL(8, 114, 27), // "on_saveLocation_btn_clicked"
QT_MOC_LITERAL(9, 142, 21), // "on_search_btn_clicked"
QT_MOC_LITERAL(10, 164, 21), // "on_remove_btn_clicked"
QT_MOC_LITERAL(11, 186, 19), // "on_move_btn_clicked"
QT_MOC_LITERAL(12, 206, 27), // "on_result_table_itemChanged"
QT_MOC_LITERAL(13, 234, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(14, 252, 4), // "item"
QT_MOC_LITERAL(15, 257, 11), // "GetFileData"
QT_MOC_LITERAL(16, 269, 8), // "fileInfo"
QT_MOC_LITERAL(17, 278, 4), // "file"
QT_MOC_LITERAL(18, 283, 15), // "GetProgressData"
QT_MOC_LITERAL(19, 299, 15), // "progressPercent"
QT_MOC_LITERAL(20, 315, 19) // "GetDialogButtonData"

    },
    "MainWindow\0SetUiData\0\0searchLocation\0"
    "quickDuplicateCheck_chk\0SetDialogData\0"
    "fileName\0on_searchLocation_btn_clicked\0"
    "on_saveLocation_btn_clicked\0"
    "on_search_btn_clicked\0on_remove_btn_clicked\0"
    "on_move_btn_clicked\0on_result_table_itemChanged\0"
    "QTableWidgetItem*\0item\0GetFileData\0"
    "fileInfo\0file\0GetProgressData\0"
    "progressPercent\0GetDialogButtonData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   77,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,
      18,    1,   88,    2, 0x08 /* Private */,
      20,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetUiData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 1: _t->SetDialogData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_searchLocation_btn_clicked(); break;
        case 3: _t->on_saveLocation_btn_clicked(); break;
        case 4: _t->on_search_btn_clicked(); break;
        case 5: _t->on_remove_btn_clicked(); break;
        case 6: _t->on_move_btn_clicked(); break;
        case 7: _t->on_result_table_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->GetFileData((*reinterpret_cast< const fileInfo(*)>(_a[1]))); break;
        case 9: _t->GetProgressData((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 10: _t->GetDialogButtonData((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QString , const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SetUiData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SetDialogData)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::SetUiData(const QString _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::SetDialogData(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
