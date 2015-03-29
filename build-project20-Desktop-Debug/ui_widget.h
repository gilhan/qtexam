/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendarWidget;
    QSpacerItem *verticalSpacer;
    QPushButton *pbOpen;
    QPushButton *pbSave;
    QPushButton *pbExit;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *leTitle;
    QPlainTextEdit *teContent;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(538, 370);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        calendarWidget = new QCalendarWidget(Widget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(calendarWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pbOpen = new QPushButton(Widget);
        pbOpen->setObjectName(QStringLiteral("pbOpen"));

        verticalLayout->addWidget(pbOpen);

        pbSave = new QPushButton(Widget);
        pbSave->setObjectName(QStringLiteral("pbSave"));

        verticalLayout->addWidget(pbSave);

        pbExit = new QPushButton(Widget);
        pbExit->setObjectName(QStringLiteral("pbExit"));

        verticalLayout->addWidget(pbExit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        leTitle = new QLineEdit(Widget);
        leTitle->setObjectName(QStringLiteral("leTitle"));

        verticalLayout_2->addWidget(leTitle);

        teContent = new QPlainTextEdit(Widget);
        teContent->setObjectName(QStringLiteral("teContent"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teContent->sizePolicy().hasHeightForWidth());
        teContent->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(teContent);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Simple Diary", 0));
        pbOpen->setText(QApplication::translate("Widget", "Open", 0));
        pbSave->setText(QApplication::translate("Widget", "Save", 0));
        pbExit->setText(QApplication::translate("Widget", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
