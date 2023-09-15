/********************************************************************************
** Form generated from reading UI file 'org_window.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORG_WINDOW_H
#define UI_ORG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_org_window
{
public:
    QComboBox *comboBox;

    void setupUi(QDialog *org_window)
    {
        if (org_window->objectName().isEmpty())
            org_window->setObjectName("org_window");
        org_window->resize(1303, 672);
        comboBox = new QComboBox(org_window);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(1080, 20, 141, 41));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	background: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QcomboBox::drop-down {\n"
"	border: 0px;\n"
"}\n"
"\n"
"QcomboBox::down-arrow {\n"
"	image: url(:/icon/arrow-204-32.ico);\n"
"	subcontrol-position: top left;\n"
"}"));

        retranslateUi(org_window);

        QMetaObject::connectSlotsByName(org_window);
    } // setupUi

    void retranslateUi(QDialog *org_window)
    {
        org_window->setWindowTitle(QCoreApplication::translate("org_window", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class org_window: public Ui_org_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORG_WINDOW_H
