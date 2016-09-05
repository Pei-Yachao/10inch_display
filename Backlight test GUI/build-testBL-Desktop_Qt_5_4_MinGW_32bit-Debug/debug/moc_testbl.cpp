/****************************************************************************
** Meta object code from reading C++ file 'testbl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/testbl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testbl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_testBL_t {
    QByteArrayData data[17];
    char stringdata[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_testBL_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_testBL_t qt_meta_stringdata_testBL = {
    {
QT_MOC_LITERAL(0, 0, 6), // "testBL"
QT_MOC_LITERAL(1, 7, 7), // "sendCmd"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 3), // "cmd"
QT_MOC_LITERAL(4, 20, 3), // "val"
QT_MOC_LITERAL(5, 24, 9), // "updateGui"
QT_MOC_LITERAL(6, 34, 11), // "isConnected"
QT_MOC_LITERAL(7, 46, 7), // "blLevel"
QT_MOC_LITERAL(8, 54, 12), // "ambientLight"
QT_MOC_LITERAL(9, 67, 19), // "on_pushExit_clicked"
QT_MOC_LITERAL(10, 87, 18), // "on_pushMin_clicked"
QT_MOC_LITERAL(11, 106, 18), // "on_pushDec_clicked"
QT_MOC_LITERAL(12, 125, 17), // "on_pushBL_clicked"
QT_MOC_LITERAL(13, 143, 19), // "on_pushAuto_clicked"
QT_MOC_LITERAL(14, 163, 18), // "on_pushInc_clicked"
QT_MOC_LITERAL(15, 182, 18), // "on_pushMax_clicked"
QT_MOC_LITERAL(16, 201, 18) // "on_pushSet_clicked"

    },
    "testBL\0sendCmd\0\0cmd\0val\0updateGui\0"
    "isConnected\0blLevel\0ambientLight\0"
    "on_pushExit_clicked\0on_pushMin_clicked\0"
    "on_pushDec_clicked\0on_pushBL_clicked\0"
    "on_pushAuto_clicked\0on_pushInc_clicked\0"
    "on_pushMax_clicked\0on_pushSet_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_testBL[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   69,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,
      15,    0,   82,    2, 0x08 /* Private */,
      16,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::UChar, QMetaType::UChar,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void testBL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        testBL *_t = static_cast<testBL *>(_o);
        switch (_id) {
        case 0: _t->sendCmd((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2]))); break;
        case 1: _t->updateGui((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< unsigned char(*)>(_a[3]))); break;
        case 2: _t->on_pushExit_clicked(); break;
        case 3: _t->on_pushMin_clicked(); break;
        case 4: _t->on_pushDec_clicked(); break;
        case 5: _t->on_pushBL_clicked(); break;
        case 6: _t->on_pushAuto_clicked(); break;
        case 7: _t->on_pushInc_clicked(); break;
        case 8: _t->on_pushMax_clicked(); break;
        case 9: _t->on_pushSet_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (testBL::*_t)(unsigned char , unsigned char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&testBL::sendCmd)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject testBL::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_testBL.data,
      qt_meta_data_testBL,  qt_static_metacall, 0, 0}
};


const QMetaObject *testBL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *testBL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_testBL.stringdata))
        return static_cast<void*>(const_cast< testBL*>(this));
    return QDialog::qt_metacast(_clname);
}

int testBL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void testBL::sendCmd(unsigned char _t1, unsigned char _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
