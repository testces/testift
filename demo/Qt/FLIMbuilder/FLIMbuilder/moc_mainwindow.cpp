/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[132];
    char stringdata0[1547];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 28), // "on_pbOpenTrainFolder_clicked"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 24), // "on_pbSaveMarkers_clicked"
QT_MOC_LITERAL(66, 24), // "on_pbOpenMarkers_clicked"
QT_MOC_LITERAL(91, 31), // "on_pbRemoveDrawnMarkers_clicked"
QT_MOC_LITERAL(123, 28), // "on_pbLoadGroundTruth_clicked"
QT_MOC_LITERAL(152, 30), // "on_pbRemoveGroundTruth_clicked"
QT_MOC_LITERAL(183, 19), // "on_pbZoomIn_clicked"
QT_MOC_LITERAL(203, 20), // "on_pbZoomOut_clicked"
QT_MOC_LITERAL(224, 22), // "on_pbFitWindow_clicked"
QT_MOC_LITERAL(247, 25), // "on_pbOriginalSize_clicked"
QT_MOC_LITERAL(273, 28), // "on_hsBrightness_valueChanged"
QT_MOC_LITERAL(302, 5), // "value"
QT_MOC_LITERAL(308, 26), // "on_hsContrast_valueChanged"
QT_MOC_LITERAL(335, 22), // "on_pbAddMarker_clicked"
QT_MOC_LITERAL(358, 25), // "on_pbRemoveMarker_clicked"
QT_MOC_LITERAL(384, 28), // "on_lwTrain_itemDoubleClicked"
QT_MOC_LITERAL(413, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(430, 4), // "item"
QT_MOC_LITERAL(435, 26), // "on_sbSliceNum_valueChanged"
QT_MOC_LITERAL(462, 32), // "on_cb3DPlane_currentIndexChanged"
QT_MOC_LITERAL(495, 5), // "index"
QT_MOC_LITERAL(501, 25), // "on_sbBandNum_valueChanged"
QT_MOC_LITERAL(527, 21), // "on_gvDisplay_released"
QT_MOC_LITERAL(549, 24), // "on_gvDisplay_printMarker"
QT_MOC_LITERAL(574, 1), // "x"
QT_MOC_LITERAL(576, 1), // "y"
QT_MOC_LITERAL(578, 24), // "on_gvDisplay_eraseMarker"
QT_MOC_LITERAL(603, 25), // "on_gvDisplay_forwardSlice"
QT_MOC_LITERAL(629, 5), // "ratio"
QT_MOC_LITERAL(635, 26), // "on_gvDisplay_backwardSlice"
QT_MOC_LITERAL(662, 26), // "on_gvDisplay_showIntensity"
QT_MOC_LITERAL(689, 23), // "on_sbBrush_valueChanged"
QT_MOC_LITERAL(713, 25), // "on_pbOpenModelDir_clicked"
QT_MOC_LITERAL(739, 37), // "on_cbSelectTrainingLayers_ite..."
QT_MOC_LITERAL(777, 16), // "on_pbRun_clicked"
QT_MOC_LITERAL(794, 21), // "on_pbLoadArch_clicked"
QT_MOC_LITERAL(816, 21), // "on_pbSaveArch_clicked"
QT_MOC_LITERAL(838, 27), // "on_teFLIM_Arch_focusChanged"
QT_MOC_LITERAL(866, 29), // "on_pbAdvancedSettings_clicked"
QT_MOC_LITERAL(896, 23), // "on_toggledNormalization"
QT_MOC_LITERAL(920, 9), // "norm_type"
QT_MOC_LITERAL(930, 32), // "on_cbMarkers_currentIndexChanged"
QT_MOC_LITERAL(963, 1), // "i"
QT_MOC_LITERAL(965, 30), // "on_cbLayer_currentIndexChanged"
QT_MOC_LITERAL(996, 36), // "on_cbKernelsType_currentIndex..."
QT_MOC_LITERAL(1033, 31), // "on_tabWidgetCurrentIndexChanged"
QT_MOC_LITERAL(1065, 33), // "on_lwActivation_itemDoubleCli..."
QT_MOC_LITERAL(1099, 41), // "on_cbMarkersVisibility_curren..."
QT_MOC_LITERAL(1141, 1), // "s"
QT_MOC_LITERAL(1143, 44), // "on_cbActivationVisibility_cur..."
QT_MOC_LITERAL(1188, 36), // "on_cbGtVisibility_currentText..."
QT_MOC_LITERAL(1225, 32), // "on_pbSelectKernelsManual_clicked"
QT_MOC_LITERAL(1258, 27), // "on_pbProjectKernels_clicked"
QT_MOC_LITERAL(1286, 26), // "on_pbInvertKernels_clicked"
QT_MOC_LITERAL(1313, 18), // "on_kernelsSelected"
QT_MOC_LITERAL(1332, 7), // "iftSet*"
QT_MOC_LITERAL(1340, 14), // "kernel_indexes"
QT_MOC_LITERAL(1355, 22), // "on_kernelDoubleClicked"
QT_MOC_LITERAL(1378, 38), // "on_cbFLIMVariation_currentInd..."
QT_MOC_LITERAL(1417, 27), // "on_actionOpenProjectClicked"
QT_MOC_LITERAL(1445, 23), // "on_pbOpenGraphs_clicked"
QT_MOC_LITERAL(1469, 25), // "on_pbRemoveGraphs_clicked"
QT_MOC_LITERAL(1495, 23), // "on_pbSaveGraphs_clicked"
QT_MOC_LITERAL(1519, 27) // "on_actionSaveProjectClicked"

    },
    "MainWindow\0on_pbOpenTrainFolder_clicked\0"
    "\0on_pbSaveMarkers_clicked\0"
    "on_pbOpenMarkers_clicked\0"
    "on_pbRemoveDrawnMarkers_clicked\0"
    "on_pbLoadGroundTruth_clicked\0"
    "on_pbRemoveGroundTruth_clicked\0"
    "on_pbZoomIn_clicked\0on_pbZoomOut_clicked\0"
    "on_pbFitWindow_clicked\0on_pbOriginalSize_clicked\0"
    "on_hsBrightness_valueChanged\0value\0"
    "on_hsContrast_valueChanged\0"
    "on_pbAddMarker_clicked\0on_pbRemoveMarker_clicked\0"
    "on_lwTrain_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0on_sbSliceNum_valueChanged\0"
    "on_cb3DPlane_currentIndexChanged\0index\0"
    "on_sbBandNum_valueChanged\0"
    "on_gvDisplay_released\0on_gvDisplay_printMarker\0"
    "x\0y\0on_gvDisplay_eraseMarker\0"
    "on_gvDisplay_forwardSlice\0ratio\0"
    "on_gvDisplay_backwardSlice\0"
    "on_gvDisplay_showIntensity\0"
    "on_sbBrush_valueChanged\0"
    "on_pbOpenModelDir_clicked\0"
    "on_cbSelectTrainingLayers_itemClicked\0"
    "on_pbRun_clicked\0on_pbLoadArch_clicked\0"
    "on_pbSaveArch_clicked\0on_teFLIM_Arch_focusChanged\0"
    "on_pbAdvancedSettings_clicked\0"
    "on_toggledNormalization\0norm_type\0"
    "on_cbMarkers_currentIndexChanged\0i\0"
    "on_cbLayer_currentIndexChanged\0"
    "on_cbKernelsType_currentIndexChanged\0"
    "on_tabWidgetCurrentIndexChanged\0"
    "on_lwActivation_itemDoubleClicked\0"
    "on_cbMarkersVisibility_currentTextChanged\0"
    "s\0on_cbActivationVisibility_currentTextChanged\0"
    "on_cbGtVisibility_currentTextChanged\0"
    "on_pbSelectKernelsManual_clicked\0"
    "on_pbProjectKernels_clicked\0"
    "on_pbInvertKernels_clicked\0"
    "on_kernelsSelected\0iftSet*\0kernel_indexes\0"
    "on_kernelDoubleClicked\0"
    "on_cbFLIMVariation_currentIndexChanged\0"
    "on_actionOpenProjectClicked\0"
    "on_pbOpenGraphs_clicked\0"
    "on_pbRemoveGraphs_clicked\0"
    "on_pbSaveGraphs_clicked\0"
    "on_actionSaveProjectClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  326,    2, 0x08,    1 /* Private */,
       3,    0,  327,    2, 0x08,    2 /* Private */,
       4,    0,  328,    2, 0x08,    3 /* Private */,
       5,    0,  329,    2, 0x08,    4 /* Private */,
       6,    0,  330,    2, 0x08,    5 /* Private */,
       7,    0,  331,    2, 0x08,    6 /* Private */,
       8,    0,  332,    2, 0x08,    7 /* Private */,
       9,    0,  333,    2, 0x08,    8 /* Private */,
      10,    0,  334,    2, 0x08,    9 /* Private */,
      11,    0,  335,    2, 0x08,   10 /* Private */,
      12,    1,  336,    2, 0x08,   11 /* Private */,
      14,    1,  339,    2, 0x08,   13 /* Private */,
      15,    0,  342,    2, 0x08,   15 /* Private */,
      16,    0,  343,    2, 0x08,   16 /* Private */,
      17,    1,  344,    2, 0x08,   17 /* Private */,
      20,    1,  347,    2, 0x08,   19 /* Private */,
      21,    1,  350,    2, 0x08,   21 /* Private */,
      23,    1,  353,    2, 0x08,   23 /* Private */,
      24,    0,  356,    2, 0x08,   25 /* Private */,
      25,    2,  357,    2, 0x08,   26 /* Private */,
      28,    2,  362,    2, 0x08,   29 /* Private */,
      29,    1,  367,    2, 0x08,   32 /* Private */,
      31,    1,  370,    2, 0x08,   34 /* Private */,
      32,    2,  373,    2, 0x08,   36 /* Private */,
      33,    1,  378,    2, 0x08,   39 /* Private */,
      34,    0,  381,    2, 0x08,   41 /* Private */,
      35,    1,  382,    2, 0x08,   42 /* Private */,
      36,    0,  385,    2, 0x08,   44 /* Private */,
      37,    0,  386,    2, 0x08,   45 /* Private */,
      38,    0,  387,    2, 0x08,   46 /* Private */,
      39,    0,  388,    2, 0x08,   47 /* Private */,
      40,    0,  389,    2, 0x08,   48 /* Private */,
      41,    1,  390,    2, 0x08,   49 /* Private */,
      43,    1,  393,    2, 0x08,   51 /* Private */,
      45,    1,  396,    2, 0x08,   53 /* Private */,
      46,    1,  399,    2, 0x08,   55 /* Private */,
      47,    1,  402,    2, 0x08,   57 /* Private */,
      48,    1,  405,    2, 0x08,   59 /* Private */,
      49,    1,  408,    2, 0x08,   61 /* Private */,
      51,    1,  411,    2, 0x08,   63 /* Private */,
      52,    1,  414,    2, 0x08,   65 /* Private */,
      53,    0,  417,    2, 0x08,   67 /* Private */,
      54,    0,  418,    2, 0x08,   68 /* Private */,
      55,    0,  419,    2, 0x08,   69 /* Private */,
      56,    1,  420,    2, 0x08,   70 /* Private */,
      59,    1,  423,    2, 0x08,   72 /* Private */,
      60,    1,  426,    2, 0x08,   74 /* Private */,
      61,    1,  429,    2, 0x08,   76 /* Private */,
      62,    0,  432,    2, 0x08,   78 /* Private */,
      63,    0,  433,    2, 0x08,   79 /* Private */,
      64,    0,  434,    2, 0x08,   80 /* Private */,
      65,    1,  435,    2, 0x08,   81 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pbOpenTrainFolder_clicked(); break;
        case 1: _t->on_pbSaveMarkers_clicked(); break;
        case 2: _t->on_pbOpenMarkers_clicked(); break;
        case 3: _t->on_pbRemoveDrawnMarkers_clicked(); break;
        case 4: _t->on_pbLoadGroundTruth_clicked(); break;
        case 5: _t->on_pbRemoveGroundTruth_clicked(); break;
        case 6: _t->on_pbZoomIn_clicked(); break;
        case 7: _t->on_pbZoomOut_clicked(); break;
        case 8: _t->on_pbFitWindow_clicked(); break;
        case 9: _t->on_pbOriginalSize_clicked(); break;
        case 10: _t->on_hsBrightness_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_hsContrast_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_pbAddMarker_clicked(); break;
        case 13: _t->on_pbRemoveMarker_clicked(); break;
        case 14: _t->on_lwTrain_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 15: _t->on_sbSliceNum_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_cb3DPlane_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_sbBandNum_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_gvDisplay_released(); break;
        case 19: _t->on_gvDisplay_printMarker((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 20: _t->on_gvDisplay_eraseMarker((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->on_gvDisplay_forwardSlice((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_gvDisplay_backwardSlice((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_gvDisplay_showIntensity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 24: _t->on_sbBrush_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_pbOpenModelDir_clicked(); break;
        case 26: _t->on_cbSelectTrainingLayers_itemClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_pbRun_clicked(); break;
        case 28: _t->on_pbLoadArch_clicked(); break;
        case 29: _t->on_pbSaveArch_clicked(); break;
        case 30: _t->on_teFLIM_Arch_focusChanged(); break;
        case 31: _t->on_pbAdvancedSettings_clicked(); break;
        case 32: _t->on_toggledNormalization((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_cbMarkers_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->on_cbLayer_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->on_cbKernelsType_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->on_tabWidgetCurrentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->on_lwActivation_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 38: _t->on_cbMarkersVisibility_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->on_cbActivationVisibility_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->on_cbGtVisibility_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->on_pbSelectKernelsManual_clicked(); break;
        case 42: _t->on_pbProjectKernels_clicked(); break;
        case 43: _t->on_pbInvertKernels_clicked(); break;
        case 44: _t->on_kernelsSelected((*reinterpret_cast< std::add_pointer_t<iftSet*>>(_a[1]))); break;
        case 45: _t->on_kernelDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 46: _t->on_cbFLIMVariation_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 47: _t->on_actionOpenProjectClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 48: _t->on_pbOpenGraphs_clicked(); break;
        case 49: _t->on_pbRemoveGraphs_clicked(); break;
        case 50: _t->on_pbSaveGraphs_clicked(); break;
        case 51: _t->on_actionSaveProjectClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<iftSet *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
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
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 52;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
