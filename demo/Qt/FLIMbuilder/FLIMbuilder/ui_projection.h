/********************************************************************************
** Form generated from reading UI file 'projection.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTION_H
#define UI_PROJECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "projectiongraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_Projection
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbProjectionSettings;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbProject;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSlider *hsPerplexity;
    QSpinBox *sbPerplexity;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QSlider *hsNumIterTSNE;
    QSpinBox *sbNumIterTSNE;
    QLabel *lblLayer;
    QComboBox *cbLayer;
    QGroupBox *gbDisplayOptions;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QComboBox *cbNodeColor;
    QLabel *label_4;
    QComboBox *cbFilterClass;
    QLabel *label_5;
    QComboBox *cbNodeType;
    QGroupBox *gbPatchesMenu;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbSaveKernels;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    ProjectionGraphicsView *projGraphicsView;
    QLineEdit *leDataSetInfo;
    QLineEdit *leNumbSamplesShown;
    QLabel *lblStatusBar;

    void setupUi(QWidget *Projection)
    {
        if (Projection->objectName().isEmpty())
            Projection->setObjectName(QString::fromUtf8("Projection"));
        Projection->resize(779, 493);
        gridLayout = new QGridLayout(Projection);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gbProjectionSettings = new QGroupBox(Projection);
        gbProjectionSettings->setObjectName(QString::fromUtf8("gbProjectionSettings"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbProjectionSettings->sizePolicy().hasHeightForWidth());
        gbProjectionSettings->setSizePolicy(sizePolicy);
        gbProjectionSettings->setMinimumSize(QSize(260, 0));
        gridLayout_2 = new QGridLayout(gbProjectionSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbProject = new QPushButton(gbProjectionSettings);
        pbProject->setObjectName(QString::fromUtf8("pbProject"));

        horizontalLayout_2->addWidget(pbProject);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(gbProjectionSettings);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        hsPerplexity = new QSlider(gbProjectionSettings);
        hsPerplexity->setObjectName(QString::fromUtf8("hsPerplexity"));
        hsPerplexity->setMaximum(50);
        hsPerplexity->setSingleStep(5);
        hsPerplexity->setValue(20);
        hsPerplexity->setOrientation(Qt::Horizontal);
        hsPerplexity->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_3->addWidget(hsPerplexity);

        sbPerplexity = new QSpinBox(gbProjectionSettings);
        sbPerplexity->setObjectName(QString::fromUtf8("sbPerplexity"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sbPerplexity->sizePolicy().hasHeightForWidth());
        sbPerplexity->setSizePolicy(sizePolicy1);
        sbPerplexity->setMinimumSize(QSize(65, 0));
        sbPerplexity->setMaximum(50);
        sbPerplexity->setValue(20);

        horizontalLayout_3->addWidget(sbPerplexity);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        label_2 = new QLabel(gbProjectionSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        hsNumIterTSNE = new QSlider(gbProjectionSettings);
        hsNumIterTSNE->setObjectName(QString::fromUtf8("hsNumIterTSNE"));
        hsNumIterTSNE->setMinimum(0);
        hsNumIterTSNE->setMaximum(2000);
        hsNumIterTSNE->setSingleStep(200);
        hsNumIterTSNE->setValue(1000);
        hsNumIterTSNE->setOrientation(Qt::Horizontal);
        hsNumIterTSNE->setTickPosition(QSlider::TicksBelow);
        hsNumIterTSNE->setTickInterval(0);

        horizontalLayout_4->addWidget(hsNumIterTSNE);

        sbNumIterTSNE = new QSpinBox(gbProjectionSettings);
        sbNumIterTSNE->setObjectName(QString::fromUtf8("sbNumIterTSNE"));
        sizePolicy1.setHeightForWidth(sbNumIterTSNE->sizePolicy().hasHeightForWidth());
        sbNumIterTSNE->setSizePolicy(sizePolicy1);
        sbNumIterTSNE->setMinimumSize(QSize(65, 0));
        sbNumIterTSNE->setMaximum(2000);
        sbNumIterTSNE->setValue(1000);

        horizontalLayout_4->addWidget(sbNumIterTSNE);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_4);

        lblLayer = new QLabel(gbProjectionSettings);
        lblLayer->setObjectName(QString::fromUtf8("lblLayer"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblLayer);

        cbLayer = new QComboBox(gbProjectionSettings);
        cbLayer->setObjectName(QString::fromUtf8("cbLayer"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cbLayer);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(gbProjectionSettings);

        gbDisplayOptions = new QGroupBox(Projection);
        gbDisplayOptions->setObjectName(QString::fromUtf8("gbDisplayOptions"));
        sizePolicy.setHeightForWidth(gbDisplayOptions->sizePolicy().hasHeightForWidth());
        gbDisplayOptions->setSizePolicy(sizePolicy);
        gbDisplayOptions->setMinimumSize(QSize(260, 0));
        verticalLayout_3 = new QVBoxLayout(gbDisplayOptions);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(gbDisplayOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        cbNodeColor = new QComboBox(gbDisplayOptions);
        cbNodeColor->setObjectName(QString::fromUtf8("cbNodeColor"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbNodeColor);

        label_4 = new QLabel(gbDisplayOptions);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        cbFilterClass = new QComboBox(gbDisplayOptions);
        cbFilterClass->setObjectName(QString::fromUtf8("cbFilterClass"));
        cbFilterClass->setEnabled(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, cbFilterClass);

        label_5 = new QLabel(gbDisplayOptions);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        cbNodeType = new QComboBox(gbDisplayOptions);
        cbNodeType->addItem(QString());
        cbNodeType->addItem(QString());
        cbNodeType->setObjectName(QString::fromUtf8("cbNodeType"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cbNodeType);


        verticalLayout_3->addLayout(formLayout_2);


        verticalLayout_2->addWidget(gbDisplayOptions);

        gbPatchesMenu = new QGroupBox(Projection);
        gbPatchesMenu->setObjectName(QString::fromUtf8("gbPatchesMenu"));
        sizePolicy.setHeightForWidth(gbPatchesMenu->sizePolicy().hasHeightForWidth());
        gbPatchesMenu->setSizePolicy(sizePolicy);
        gbPatchesMenu->setMinimumSize(QSize(260, 0));
        gridLayout_3 = new QGridLayout(gbPatchesMenu);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pbSaveKernels = new QPushButton(gbPatchesMenu);
        pbSaveKernels->setObjectName(QString::fromUtf8("pbSaveKernels"));

        horizontalLayout_5->addWidget(pbSaveKernels);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        verticalLayout_2->addWidget(gbPatchesMenu);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        projGraphicsView = new ProjectionGraphicsView(Projection);
        projGraphicsView->setObjectName(QString::fromUtf8("projGraphicsView"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(projGraphicsView->sizePolicy().hasHeightForWidth());
        projGraphicsView->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(projGraphicsView);

        leDataSetInfo = new QLineEdit(Projection);
        leDataSetInfo->setObjectName(QString::fromUtf8("leDataSetInfo"));

        verticalLayout->addWidget(leDataSetInfo);

        leNumbSamplesShown = new QLineEdit(Projection);
        leNumbSamplesShown->setObjectName(QString::fromUtf8("leNumbSamplesShown"));

        verticalLayout->addWidget(leNumbSamplesShown);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        lblStatusBar = new QLabel(Projection);
        lblStatusBar->setObjectName(QString::fromUtf8("lblStatusBar"));

        gridLayout->addWidget(lblStatusBar, 1, 0, 1, 1);


        retranslateUi(Projection);

        QMetaObject::connectSlotsByName(Projection);
    } // setupUi

    void retranslateUi(QWidget *Projection)
    {
        Projection->setWindowTitle(QCoreApplication::translate("Projection", "Form", nullptr));
        gbProjectionSettings->setTitle(QCoreApplication::translate("Projection", "Projection Parameters", nullptr));
        pbProject->setText(QCoreApplication::translate("Projection", "Project", nullptr));
        label->setText(QCoreApplication::translate("Projection", "Perplexity", nullptr));
        label_2->setText(QCoreApplication::translate("Projection", "Num. Iter.", nullptr));
        lblLayer->setText(QCoreApplication::translate("Projection", "Layer", nullptr));
        gbDisplayOptions->setTitle(QCoreApplication::translate("Projection", "Display Options", nullptr));
        label_3->setText(QCoreApplication::translate("Projection", "Node Color", nullptr));
        label_4->setText(QCoreApplication::translate("Projection", "Filter Class", nullptr));
        label_5->setText(QCoreApplication::translate("Projection", "Node Type", nullptr));
        cbNodeType->setItemText(0, QCoreApplication::translate("Projection", "Point", nullptr));
        cbNodeType->setItemText(1, QCoreApplication::translate("Projection", "Number", nullptr));

        gbPatchesMenu->setTitle(QCoreApplication::translate("Projection", "Patches Menu", nullptr));
        pbSaveKernels->setText(QCoreApplication::translate("Projection", "Save", nullptr));
        leDataSetInfo->setText(QCoreApplication::translate("Projection", "Info: --", nullptr));
        leNumbSamplesShown->setText(QCoreApplication::translate("Projection", "Samples Shown:", nullptr));
        lblStatusBar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Projection: public Ui_Projection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTION_H
