/********************************************************************************
** Form generated from reading UI file 'user_register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_REGISTER_H
#define UI_USER_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Register
{
public:
    QLabel *label_3;
    QWidget *widget_2;
    QLabel *password_label_3;
    QComboBox *gender_comboBox;
    QLineEdit *password_lineedit_2;
    QLabel *username_label_2;
    QLineEdit *username_lineedit_2;
    QLabel *password_label_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *register_pushButton_2;
    QPushButton *cancel_pushbutton_2;

    void setupUi(QWidget *User_Register)
    {
        if (User_Register->objectName().isEmpty())
            User_Register->setObjectName(QString::fromUtf8("User_Register"));
        User_Register->resize(281, 298);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(User_Register->sizePolicy().hasHeightForWidth());
        User_Register->setSizePolicy(sizePolicy);
        User_Register->setStyleSheet(QString::fromUtf8("background-color:white"));
        label_3 = new QLabel(User_Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 0, 141, 61));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_3->setFont(font);
        label_3->setMouseTracking(false);
        widget_2 = new QWidget(User_Register);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(20, 80, 256, 121));
        password_label_3 = new QLabel(widget_2);
        password_label_3->setObjectName(QString::fromUtf8("password_label_3"));
        password_label_3->setGeometry(QRect(24, 50, 61, 16));
        gender_comboBox = new QComboBox(widget_2);
        gender_comboBox->addItem(QString());
        gender_comboBox->addItem(QString());
        gender_comboBox->setObjectName(QString::fromUtf8("gender_comboBox"));
        gender_comboBox->setGeometry(QRect(91, 51, 51, 21));
        gender_comboBox->setStyleSheet(QString::fromUtf8("border:none"));
        password_lineedit_2 = new QLineEdit(widget_2);
        password_lineedit_2->setObjectName(QString::fromUtf8("password_lineedit_2"));
        password_lineedit_2->setGeometry(QRect(91, 83, 141, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(password_lineedit_2->sizePolicy().hasHeightForWidth());
        password_lineedit_2->setSizePolicy(sizePolicy2);
        password_lineedit_2->setEchoMode(QLineEdit::Password);
        username_label_2 = new QLabel(widget_2);
        username_label_2->setObjectName(QString::fromUtf8("username_label_2"));
        username_label_2->setGeometry(QRect(24, 16, 60, 16));
        username_lineedit_2 = new QLineEdit(widget_2);
        username_lineedit_2->setObjectName(QString::fromUtf8("username_lineedit_2"));
        username_lineedit_2->setGeometry(QRect(91, 16, 141, 21));
        password_label_4 = new QLabel(widget_2);
        password_label_4->setObjectName(QString::fromUtf8("password_label_4"));
        password_label_4->setGeometry(QRect(24, 83, 61, 16));
        widget = new QWidget(User_Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 260, 210, 46));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        register_pushButton_2 = new QPushButton(widget);
        register_pushButton_2->setObjectName(QString::fromUtf8("register_pushButton_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        register_pushButton_2->setFont(font1);
        register_pushButton_2->setStyleSheet(QString::fromUtf8("background-color:white"));
        register_pushButton_2->setCheckable(false);

        horizontalLayout_2->addWidget(register_pushButton_2);

        cancel_pushbutton_2 = new QPushButton(widget);
        cancel_pushbutton_2->setObjectName(QString::fromUtf8("cancel_pushbutton_2"));
        cancel_pushbutton_2->setFont(font1);

        horizontalLayout_2->addWidget(cancel_pushbutton_2);


        retranslateUi(User_Register);

        QMetaObject::connectSlotsByName(User_Register);
    } // setupUi

    void retranslateUi(QWidget *User_Register)
    {
        User_Register->setWindowTitle(QCoreApplication::translate("User_Register", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("User_Register", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        password_label_3->setText(QCoreApplication::translate("User_Register", "\346\200\247\345\210\253  \357\274\232", nullptr));
        gender_comboBox->setItemText(0, QCoreApplication::translate("User_Register", "\347\224\267", nullptr));
        gender_comboBox->setItemText(1, QCoreApplication::translate("User_Register", "\345\245\263", nullptr));

        username_label_2->setText(QCoreApplication::translate("User_Register", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        password_label_4->setText(QCoreApplication::translate("User_Register", "\345\257\206\347\240\201  \357\274\232", nullptr));
        register_pushButton_2->setText(QCoreApplication::translate("User_Register", "\346\263\250\345\206\214", nullptr));
        cancel_pushbutton_2->setText(QCoreApplication::translate("User_Register", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Register: public Ui_User_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_REGISTER_H
