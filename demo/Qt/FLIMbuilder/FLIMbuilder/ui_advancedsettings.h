/********************************************************************************
** Form generated from reading UI file 'advancedsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDSETTINGS_H
#define UI_ADVANCEDSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdvancedSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbMarkerBasedNormalization;
    QRadioButton *rbObjectBasedNormalization;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbOk;

    void setupUi(QWidget *AdvancedSettings)
    {
        if (AdvancedSettings->objectName().isEmpty())
            AdvancedSettings->setObjectName(QString::fromUtf8("AdvancedSettings"));
        AdvancedSettings->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(AdvancedSettings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbMarkerBasedNormalization = new QRadioButton(AdvancedSettings);
        rbMarkerBasedNormalization->setObjectName(QString::fromUtf8("rbMarkerBasedNormalization"));
        rbMarkerBasedNormalization->setChecked(true);

        horizontalLayout->addWidget(rbMarkerBasedNormalization);

        rbObjectBasedNormalization = new QRadioButton(AdvancedSettings);
        rbObjectBasedNormalization->setObjectName(QString::fromUtf8("rbObjectBasedNormalization"));
        rbObjectBasedNormalization->setChecked(false);

        horizontalLayout->addWidget(rbObjectBasedNormalization);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbOk = new QPushButton(AdvancedSettings);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        horizontalLayout_2->addWidget(pbOk);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(AdvancedSettings);

        QMetaObject::connectSlotsByName(AdvancedSettings);
    } // setupUi

    void retranslateUi(QWidget *AdvancedSettings)
    {
        AdvancedSettings->setWindowTitle(QCoreApplication::translate("AdvancedSettings", "Form", nullptr));
        rbMarkerBasedNormalization->setText(QCoreApplication::translate("AdvancedSettings", "Marker-based Norm.", nullptr));
        rbObjectBasedNormalization->setText(QCoreApplication::translate("AdvancedSettings", "Object-based Norm.", nullptr));
        pbOk->setText(QCoreApplication::translate("AdvancedSettings", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdvancedSettings: public Ui_AdvancedSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDSETTINGS_H
