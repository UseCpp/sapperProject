/****************************************************************************
** Meta object code from reading C++ file 'sapergamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sapergamewindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sapergamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN15saperGameWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15saperGameWindowE = QtMocHelpers::stringData(
    "saperGameWindow",
    "on_exitGame_QPB_clicked",
    "",
    "on_easyStart_QPB_clicked",
    "on_midStart_QPB_clicked",
    "on_buyFlags_QPB_clicked",
    "on_updInvent_QPB_clicked",
    "on_saveExitMenu_QPB_clicked",
    "on_opRandBomb_QPB_clicked",
    "on_incrVisible_QPB_clicked",
    "on_buyScanner_QPB_clicked",
    "on_updInventSc_QPB_clicked",
    "on_demoMove_QPB_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15saperGameWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject saperGameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN15saperGameWindowE.offsetsAndSizes,
    qt_meta_data_ZN15saperGameWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15saperGameWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<saperGameWindow, std::true_type>,
        // method 'on_exitGame_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_easyStart_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_midStart_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buyFlags_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updInvent_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveExitMenu_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_opRandBomb_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_incrVisible_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buyScanner_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updInventSc_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_demoMove_QPB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void saperGameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<saperGameWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_exitGame_QPB_clicked(); break;
        case 1: _t->on_easyStart_QPB_clicked(); break;
        case 2: _t->on_midStart_QPB_clicked(); break;
        case 3: _t->on_buyFlags_QPB_clicked(); break;
        case 4: _t->on_updInvent_QPB_clicked(); break;
        case 5: _t->on_saveExitMenu_QPB_clicked(); break;
        case 6: _t->on_opRandBomb_QPB_clicked(); break;
        case 7: _t->on_incrVisible_QPB_clicked(); break;
        case 8: _t->on_buyScanner_QPB_clicked(); break;
        case 9: _t->on_updInventSc_QPB_clicked(); break;
        case 10: _t->on_demoMove_QPB_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *saperGameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *saperGameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15saperGameWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int saperGameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
