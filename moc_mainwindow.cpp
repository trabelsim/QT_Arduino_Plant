/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_exit_button_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "myCustomSlot"
QT_MOC_LITERAL(4, 48, 24), // "on_connectButton_clicked"
QT_MOC_LITERAL(5, 73, 15), // "get_device_name"
QT_MOC_LITERAL(6, 89, 18), // "on_getdata_clicked"
QT_MOC_LITERAL(7, 108, 12), // "readFromPort"
QT_MOC_LITERAL(8, 121, 8), // "readTemp"
QT_MOC_LITERAL(9, 130, 12), // "insert_image"
QT_MOC_LITERAL(10, 143, 12), // "setup_plants"
QT_MOC_LITERAL(11, 156, 19), // "push_data_to_series"
QT_MOC_LITERAL(12, 176, 5), // "tempx"
QT_MOC_LITERAL(13, 182, 4), // "humx"
QT_MOC_LITERAL(14, 187, 4), // "luxx"
QT_MOC_LITERAL(15, 192, 13), // "QElapsedTimer"
QT_MOC_LITERAL(16, 206, 5), // "timer"
QT_MOC_LITERAL(17, 212, 17), // "set_up_line_edits"
QT_MOC_LITERAL(18, 230, 11) // "createChart"

    },
    "MainWindow\0on_exit_button_clicked\0\0"
    "myCustomSlot\0on_connectButton_clicked\0"
    "get_device_name\0on_getdata_clicked\0"
    "readFromPort\0readTemp\0insert_image\0"
    "setup_plants\0push_data_to_series\0tempx\0"
    "humx\0luxx\0QElapsedTimer\0timer\0"
    "set_up_line_edits\0createChart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    4,   83,    2, 0x08 /* Private */,
      17,    0,   92,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 15,   12,   13,   14,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_exit_button_clicked(); break;
        case 1: _t->myCustomSlot(); break;
        case 2: { int _r = _t->on_connectButton_clicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->get_device_name(); break;
        case 4: _t->on_getdata_clicked(); break;
        case 5: _t->readFromPort(); break;
        case 6: _t->readTemp(); break;
        case 7: _t->insert_image(); break;
        case 8: _t->setup_plants(); break;
        case 9: _t->push_data_to_series((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QElapsedTimer(*)>(_a[4]))); break;
        case 10: _t->set_up_line_edits(); break;
        case 11: _t->createChart(); break;
        default: ;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
