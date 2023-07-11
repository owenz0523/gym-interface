/****************************************************************************
** Meta object code from reading C++ file 'empdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../thinnoxgym/empdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'empdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EmpDialog_t {
    const uint offsetsAndSize[30];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_EmpDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_EmpDialog_t qt_meta_stringdata_EmpDialog = {
    {
QT_MOC_LITERAL(0, 9), // "EmpDialog"
QT_MOC_LITERAL(10, 10), // "myfunction"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 25), // "on_quitPushButton_clicked"
QT_MOC_LITERAL(48, 28), // "on_restartPushButton_clicked"
QT_MOC_LITERAL(77, 31), // "on_buyBalancePushButton_clicked"
QT_MOC_LITERAL(109, 32), // "on_sellBalancePushButton_clicked"
QT_MOC_LITERAL(142, 33), // "on_buyTreadmillPushButton_cli..."
QT_MOC_LITERAL(176, 34), // "on_sellTreadmillPushButton_cl..."
QT_MOC_LITERAL(211, 31), // "on_buyStretchPushButton_clicked"
QT_MOC_LITERAL(243, 32), // "on_sellStretchPushButton_clicked"
QT_MOC_LITERAL(276, 34), // "on_buyBenchpressPushButton_cl..."
QT_MOC_LITERAL(311, 35), // "on_sellBenchpressPushButton_c..."
QT_MOC_LITERAL(347, 17), // "usernameSelection"
QT_MOC_LITERAL(365, 5) // "index"

    },
    "EmpDialog\0myfunction\0\0on_quitPushButton_clicked\0"
    "on_restartPushButton_clicked\0"
    "on_buyBalancePushButton_clicked\0"
    "on_sellBalancePushButton_clicked\0"
    "on_buyTreadmillPushButton_clicked\0"
    "on_sellTreadmillPushButton_clicked\0"
    "on_buyStretchPushButton_clicked\0"
    "on_sellStretchPushButton_clicked\0"
    "on_buyBenchpressPushButton_clicked\0"
    "on_sellBenchpressPushButton_clicked\0"
    "usernameSelection\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmpDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    1 /* Public */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    0,   95,    2, 0x08,   10 /* Private */,
      12,    0,   96,    2, 0x08,   11 /* Private */,
      13,    1,   97,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void EmpDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmpDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->myfunction(); break;
        case 1: _t->on_quitPushButton_clicked(); break;
        case 2: _t->on_restartPushButton_clicked(); break;
        case 3: _t->on_buyBalancePushButton_clicked(); break;
        case 4: _t->on_sellBalancePushButton_clicked(); break;
        case 5: _t->on_buyTreadmillPushButton_clicked(); break;
        case 6: _t->on_sellTreadmillPushButton_clicked(); break;
        case 7: _t->on_buyStretchPushButton_clicked(); break;
        case 8: _t->on_sellStretchPushButton_clicked(); break;
        case 9: _t->on_buyBenchpressPushButton_clicked(); break;
        case 10: _t->on_sellBenchpressPushButton_clicked(); break;
        case 11: _t->usernameSelection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EmpDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EmpDialog.offsetsAndSize,
    qt_meta_data_EmpDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_EmpDialog_t
, QtPrivate::TypeAndForceComplete<EmpDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *EmpDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmpDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EmpDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EmpDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
