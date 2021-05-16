/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *SaveColor;
    QPushButton *LoadColor;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1, 21, 671, 321));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button_1 = new QPushButton(widget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Button_1, 0, 0, 1, 1);

        Button_2 = new QPushButton(widget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        sizePolicy.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Button_2, 0, 1, 1, 1);

        Button_3 = new QPushButton(widget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Button_3, 0, 2, 1, 1);

        Button_4 = new QPushButton(widget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Button_4, 1, 0, 1, 1);

        Button_5 = new QPushButton(widget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        sizePolicy2.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Button_5, 1, 1, 1, 1);

        Button_6 = new QPushButton(widget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        sizePolicy2.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Button_6, 1, 2, 1, 1);

        Button_7 = new QPushButton(widget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        sizePolicy2.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Button_7, 2, 0, 1, 1);

        Button_8 = new QPushButton(widget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        sizePolicy.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Button_8, 2, 1, 1, 1);

        Button_9 = new QPushButton(widget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        sizePolicy2.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Button_9, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        SaveColor = new QPushButton(widget);
        SaveColor->setObjectName(QString::fromUtf8("SaveColor"));

        verticalLayout->addWidget(SaveColor);

        LoadColor = new QPushButton(widget);
        LoadColor->setObjectName(QString::fromUtf8("LoadColor"));

        verticalLayout->addWidget(LoadColor);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Button_1->setText(QCoreApplication::translate("Widget", "One", nullptr));
        Button_2->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        Button_3->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        Button_4->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        Button_5->setText(QCoreApplication::translate("Widget", "Five", nullptr));
        Button_6->setText(QCoreApplication::translate("Widget", "Six", nullptr));
        Button_7->setText(QCoreApplication::translate("Widget", "Seven", nullptr));
        Button_8->setText(QCoreApplication::translate("Widget", "Eight", nullptr));
        Button_9->setText(QCoreApplication::translate("Widget", "Nine", nullptr));
        SaveColor->setText(QCoreApplication::translate("Widget", " Save Color", nullptr));
        LoadColor->setText(QCoreApplication::translate("Widget", "Load Color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
