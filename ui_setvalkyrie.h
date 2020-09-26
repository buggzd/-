/********************************************************************************
** Form generated from reading UI file 'setvalkyrie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETVALKYRIE_H
#define UI_SETVALKYRIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetValkyrie
{
public:
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_nickname;
    QPushButton *btn_ok;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_icon;
    QLabel *label_3;

    void setupUi(QWidget *SetValkyrie)
    {
        if (SetValkyrie->objectName().isEmpty())
            SetValkyrie->setObjectName(QString::fromUtf8("SetValkyrie"));
        SetValkyrie->resize(400, 300);
        lineEdit_name = new QLineEdit(SetValkyrie);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(100, 30, 113, 20));
        lineEdit_nickname = new QLineEdit(SetValkyrie);
        lineEdit_nickname->setObjectName(QString::fromUtf8("lineEdit_nickname"));
        lineEdit_nickname->setGeometry(QRect(100, 80, 113, 20));
        btn_ok = new QPushButton(SetValkyrie);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(280, 120, 80, 20));
        label = new QLabel(SetValkyrie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 71, 20));
        label_2 = new QLabel(SetValkyrie);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 61, 16));
        btn_icon = new QPushButton(SetValkyrie);
        btn_icon->setObjectName(QString::fromUtf8("btn_icon"));
        btn_icon->setGeometry(QRect(100, 140, 61, 51));
        label_3 = new QLabel(SetValkyrie);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 142, 61, 20));

        retranslateUi(SetValkyrie);

        QMetaObject::connectSlotsByName(SetValkyrie);
    } // setupUi

    void retranslateUi(QWidget *SetValkyrie)
    {
        SetValkyrie->setWindowTitle(QApplication::translate("SetValkyrie", "Form", nullptr));
        btn_ok->setText(QApplication::translate("SetValkyrie", "\347\241\256\345\256\232", nullptr));
        label->setText(QApplication::translate("SetValkyrie", "\345\245\263\346\255\246\347\245\236\345\220\215\345\255\227", nullptr));
        label_2->setText(QApplication::translate("SetValkyrie", "\345\245\263\346\255\246\347\245\236\346\230\265\347\247\260", nullptr));
        btn_icon->setText(QString());
        label_3->setText(QApplication::translate("SetValkyrie", "\345\245\263\346\255\246\347\245\236\345\244\264\345\203\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetValkyrie: public Ui_SetValkyrie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETVALKYRIE_H
