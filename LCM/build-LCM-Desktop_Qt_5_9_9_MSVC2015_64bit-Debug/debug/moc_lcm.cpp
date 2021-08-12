/****************************************************************************
** Meta object code from reading C++ file 'lcm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LCM/lcm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lcm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LCM_t {
    QByteArrayData data[7];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LCM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LCM_t qt_meta_stringdata_LCM = {
    {
QT_MOC_LITERAL(0, 0, 3), // "LCM"
QT_MOC_LITERAL(1, 4, 11), // "ReceiveInfo"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 20), // "ReadPendingDatagrams"
QT_MOC_LITERAL(4, 38, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 60, 26), // "on_pushButton_exit_clicked"
QT_MOC_LITERAL(6, 87, 29) // "on_pushButton_poweron_clicked"

    },
    "LCM\0ReceiveInfo\0\0ReadPendingDatagrams\0"
    "on_pushButton_clicked\0on_pushButton_exit_clicked\0"
    "on_pushButton_poweron_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LCM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LCM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LCM *_t = static_cast<LCM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReceiveInfo(); break;
        case 1: _t->ReadPendingDatagrams(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_exit_clicked(); break;
        case 4: _t->on_pushButton_poweron_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LCM::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LCM.data,
      qt_meta_data_LCM,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LCM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LCM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LCM.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LCM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
