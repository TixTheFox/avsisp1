/********************************************************************************
** Form generated from reading UI file 'orgwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGWINDOW_H
#define UI_ORGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_orgWindow
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *orgWindow)
    {
        if (orgWindow->objectName().isEmpty())
            orgWindow->setObjectName("orgWindow");
        orgWindow->resize(1266, 683);
        listWidget = new QListWidget(orgWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 40, 1261, 631));
        listWidget->setViewMode(QListView::IconMode);

        retranslateUi(orgWindow);

        QMetaObject::connectSlotsByName(orgWindow);
    } // setupUi

    void retranslateUi(QDialog *orgWindow)
    {
        orgWindow->setWindowTitle(QCoreApplication::translate("orgWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orgWindow: public Ui_orgWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGWINDOW_H
