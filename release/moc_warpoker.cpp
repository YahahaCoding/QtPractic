/****************************************************************************
** Meta object code from reading C++ file 'warpoker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../warpoker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'warpoker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WarPoker_t {
    QByteArrayData data[42];
    char stringdata0[690];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WarPoker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WarPoker_t qt_meta_stringdata_WarPoker = {
    {
QT_MOC_LITERAL(0, 0, 8), // "WarPoker"
QT_MOC_LITERAL(1, 9, 19), // "askForShowTheConfig"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "askForShowTheChatTool"
QT_MOC_LITERAL(4, 52, 21), // "askForHideTheChatTool"
QT_MOC_LITERAL(5, 74, 15), // "askForSendReady"
QT_MOC_LITERAL(6, 90, 21), // "askForSendCancelReady"
QT_MOC_LITERAL(7, 112, 23), // "askForSendDistanceCards"
QT_MOC_LITERAL(8, 136, 17), // "QMap<int,QString>"
QT_MOC_LITERAL(9, 154, 24), // "askForSendTheCardsOnRoad"
QT_MOC_LITERAL(10, 179, 15), // "QMap<int,Card*>"
QT_MOC_LITERAL(11, 195, 18), // "askInitForNewRound"
QT_MOC_LITERAL(12, 214, 25), // "on_actionconfig_triggered"
QT_MOC_LITERAL(13, 240, 19), // "on_chatTool_clicked"
QT_MOC_LITERAL(14, 260, 22), // "on_readyButton_clicked"
QT_MOC_LITERAL(15, 283, 17), // "setTheReadyButton"
QT_MOC_LITERAL(16, 301, 8), // "isEnable"
QT_MOC_LITERAL(17, 310, 21), // "disableTheReadyButton"
QT_MOC_LITERAL(18, 332, 13), // "dealLicensing"
QT_MOC_LITERAL(19, 346, 12), // "receiveCards"
QT_MOC_LITERAL(20, 359, 6), // "number"
QT_MOC_LITERAL(21, 366, 8), // "cardName"
QT_MOC_LITERAL(22, 375, 12), // "mappingCards"
QT_MOC_LITERAL(23, 388, 5), // "cards"
QT_MOC_LITERAL(24, 394, 16), // "showTheHandCards"
QT_MOC_LITERAL(25, 411, 10), // "selectCard"
QT_MOC_LITERAL(26, 422, 12), // "CardOperate*"
QT_MOC_LITERAL(27, 435, 15), // "currentOperator"
QT_MOC_LITERAL(28, 451, 21), // "leftRoadButtonClicked"
QT_MOC_LITERAL(29, 473, 23), // "centerRoadButtonClicked"
QT_MOC_LITERAL(30, 497, 22), // "rightRoadButtonClicked"
QT_MOC_LITERAL(31, 520, 21), // "recoveryButtonClicked"
QT_MOC_LITERAL(32, 542, 24), // "cardConfirmButtonClicked"
QT_MOC_LITERAL(33, 567, 17), // "showTheEnemyCards"
QT_MOC_LITERAL(34, 585, 22), // "updateEnemyCardNumbers"
QT_MOC_LITERAL(35, 608, 4), // "isUp"
QT_MOC_LITERAL(36, 613, 19), // "getEnemyCardNumbers"
QT_MOC_LITERAL(37, 633, 12), // "setEnemyCard"
QT_MOC_LITERAL(38, 646, 8), // "cardFace"
QT_MOC_LITERAL(39, 655, 4), // "road"
QT_MOC_LITERAL(40, 660, 19), // "recordTheEnemyCards"
QT_MOC_LITERAL(41, 680, 9) // "cardPoint"

    },
    "WarPoker\0askForShowTheConfig\0\0"
    "askForShowTheChatTool\0askForHideTheChatTool\0"
    "askForSendReady\0askForSendCancelReady\0"
    "askForSendDistanceCards\0QMap<int,QString>\0"
    "askForSendTheCardsOnRoad\0QMap<int,Card*>\0"
    "askInitForNewRound\0on_actionconfig_triggered\0"
    "on_chatTool_clicked\0on_readyButton_clicked\0"
    "setTheReadyButton\0isEnable\0"
    "disableTheReadyButton\0dealLicensing\0"
    "receiveCards\0number\0cardName\0mappingCards\0"
    "cards\0showTheHandCards\0selectCard\0"
    "CardOperate*\0currentOperator\0"
    "leftRoadButtonClicked\0centerRoadButtonClicked\0"
    "rightRoadButtonClicked\0recoveryButtonClicked\0"
    "cardConfirmButtonClicked\0showTheEnemyCards\0"
    "updateEnemyCardNumbers\0isUp\0"
    "getEnemyCardNumbers\0setEnemyCard\0"
    "cardFace\0road\0recordTheEnemyCards\0"
    "cardPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WarPoker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    2,  155,    2, 0x06 /* Public */,
       4,    0,  160,    2, 0x06 /* Public */,
       5,    0,  161,    2, 0x06 /* Public */,
       6,    0,  162,    2, 0x06 /* Public */,
       7,    3,  163,    2, 0x06 /* Public */,
       9,    1,  170,    2, 0x06 /* Public */,
      11,    0,  173,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  174,    2, 0x08 /* Private */,
      13,    0,  175,    2, 0x08 /* Private */,
      14,    0,  176,    2, 0x08 /* Private */,
      15,    1,  177,    2, 0x08 /* Private */,
      17,    0,  180,    2, 0x08 /* Private */,
      18,    0,  181,    2, 0x08 /* Private */,
      19,    2,  182,    2, 0x08 /* Private */,
      22,    2,  187,    2, 0x08 /* Private */,
      24,    0,  192,    2, 0x08 /* Private */,
      25,    1,  193,    2, 0x08 /* Private */,
      28,    0,  196,    2, 0x08 /* Private */,
      29,    0,  197,    2, 0x08 /* Private */,
      30,    0,  198,    2, 0x08 /* Private */,
      31,    0,  199,    2, 0x08 /* Private */,
      32,    0,  200,    2, 0x08 /* Private */,
      33,    0,  201,    2, 0x08 /* Private */,
      34,    1,  202,    2, 0x08 /* Private */,
      36,    0,  205,    2, 0x08 /* Private */,
      37,    3,  206,    2, 0x08 /* Private */,
      40,    3,  213,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,   20,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   20,   38,   39,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   39,   38,   41,

       0        // eod
};

void WarPoker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WarPoker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->askForShowTheConfig(); break;
        case 1: _t->askForShowTheChatTool((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->askForHideTheChatTool(); break;
        case 3: _t->askForSendReady(); break;
        case 4: _t->askForSendCancelReady(); break;
        case 5: _t->askForSendDistanceCards((*reinterpret_cast< QMap<int,QString>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->askForSendTheCardsOnRoad((*reinterpret_cast< QMap<int,Card*>(*)>(_a[1]))); break;
        case 7: _t->askInitForNewRound(); break;
        case 8: _t->on_actionconfig_triggered(); break;
        case 9: _t->on_chatTool_clicked(); break;
        case 10: _t->on_readyButton_clicked(); break;
        case 11: _t->setTheReadyButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->disableTheReadyButton(); break;
        case 13: _t->dealLicensing(); break;
        case 14: _t->receiveCards((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->mappingCards((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[2]))); break;
        case 16: _t->showTheHandCards(); break;
        case 17: _t->selectCard((*reinterpret_cast< CardOperate*(*)>(_a[1]))); break;
        case 18: _t->leftRoadButtonClicked(); break;
        case 19: _t->centerRoadButtonClicked(); break;
        case 20: _t->rightRoadButtonClicked(); break;
        case 21: _t->recoveryButtonClicked(); break;
        case 22: _t->cardConfirmButtonClicked(); break;
        case 23: _t->showTheEnemyCards(); break;
        case 24: _t->updateEnemyCardNumbers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: { int _r = _t->getEnemyCardNumbers();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->setEnemyCard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 27: _t->recordTheEnemyCards((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CardOperate* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WarPoker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarPoker::askForShowTheConfig)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WarPoker::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarPoker::askForShowTheChatTool)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WarPoker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarPoker::askForHideTheChatTool)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WarPoker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarPoker::askForSendReady)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WarPoker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarPoker::askForSendCancelReady)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WarPoker::*)(QMap<int,QString> , bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarPoker::askForSendDistanceCards)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WarPoker::*)(QMap<int,Card*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarPoker::askForSendTheCardsOnRoad)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WarPoker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WarPoker::askInitForNewRound)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WarPoker::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_WarPoker.data,
    qt_meta_data_WarPoker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WarPoker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WarPoker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WarPoker.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WarPoker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void WarPoker::askForShowTheConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WarPoker::askForShowTheChatTool(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WarPoker::askForHideTheChatTool()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WarPoker::askForSendReady()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WarPoker::askForSendCancelReady()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WarPoker::askForSendDistanceCards(QMap<int,QString> _t1, bool _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WarPoker::askForSendTheCardsOnRoad(QMap<int,Card*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WarPoker::askInitForNewRound()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
