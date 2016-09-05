/****************************************************************************
** Meta object code from reading C++ file 'hid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/hid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HID_t {
    QByteArrayData data[10];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HID_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HID_t qt_meta_stringdata_HID = {
    {
QT_MOC_LITERAL(0, 0, 3), // "HID"
QT_MOC_LITERAL(1, 4, 9), // "hidUpdate"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 11), // "isConnected"
QT_MOC_LITERAL(4, 27, 7), // "blLevel"
QT_MOC_LITERAL(5, 35, 12), // "ambientLight"
QT_MOC_LITERAL(6, 48, 7), // "pollUSB"
QT_MOC_LITERAL(7, 56, 7), // "sendCmd"
QT_MOC_LITERAL(8, 64, 4), // "_cmd"
QT_MOC_LITERAL(9, 69, 4) // "_val"

    },
    "HID\0hidUpdate\0\0isConnected\0blLevel\0"
    "ambientLight\0pollUSB\0sendCmd\0_cmd\0"
    "_val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HID[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   36,    2, 0x0a /* Public */,
       7,    2,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::UChar, QMetaType::UChar,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,    8,    9,

       0        // eod
};

void HID::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HID *_t = static_cast<HID *>(_o);
        switch (_id) {
        case 0: _t->hidUpdate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< unsigned char(*)>(_a[3]))); break;
        case 1: _t->pollUSB(); break;
        case 2: _t->sendCmd((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HID::*_t)(bool , unsigned char , unsigned char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HID::hidUpdate)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HID::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HID.data,
      qt_meta_data_HID,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HID::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HID::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HID.stringdata))
        return static_cast<void*>(const_cast< HID*>(this));
    return QObject::qt_metacast(_clname);
}

int HID::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HID::hidUpdate(bool _t1, unsigned char _t2, unsigned char _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
