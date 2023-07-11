/****************************************************************************
** Meta object code from reading C++ file 'memdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../thinnoxgym/memdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MemDialog_t {
    const uint offsetsAndSize[16];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MemDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MemDialog_t qt_meta_stringdata_MemDialog = {
    {
QT_MOC_LITERAL(0, 9), // "MemDialog"
QT_MOC_LITERAL(10, 10), // "myfunction"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 21), // "on_quitButton_clicked"
QT_MOC_LITERAL(44, 24), // "on_restartButton_clicked"
QT_MOC_LITERAL(69, 25), // "on_planPushButton_clicked"
QT_MOC_LITERAL(95, 31), // "on_membershipPushButton_clicked"
QT_MOC_LITERAL(127, 28) // "on_workoutPushButton_clicked"

    },
    "MemDialog\0myfunction\0\0on_quitButton_clicked\0"
    "on_restartButton_clicked\0"
    "on_planPushButton_clicked\0"
    "on_membershipPushButton_clicked\0"
    "on_workoutPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MemDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MemDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->myfunction(); break;
        case 1: _t->on_quitButton_clicked(); break;
        case 2: _t->on_restartButton_clicked(); break;
        case 3: _t->on_planPushButton_clicked(); break;
        case 4: _t->on_membershipPushButton_clicked(); break;
        case 5: _t->on_workoutPushButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MemDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MemDialog.offsetsAndSize,
    qt_meta_data_MemDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MemDialog_t
, QtPrivate::TypeAndForceComplete<MemDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MemDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MemDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MemDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MemDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
