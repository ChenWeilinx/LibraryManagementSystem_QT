/********************************************************************************
** Form generated from reading UI file 'usermanage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGE_H
#define UI_USERMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userManage
{
public:
    QLabel *label;
    QPushButton *retrun_pushbutton;
    QPushButton *fresh_pushbutton;
    QLabel *label_2;
    QLineEdit *delete_lineEdit;
    QPushButton *delete_pushbutton;
    QLabel *label_4;
    QLineEdit *retry_lineEdit;
    QTableWidget *user_tableview;
    QPushButton *exit_pushbutton;

    void setupUi(QWidget *userManage)
    {
        if (userManage->objectName().isEmpty())
            userManage->setObjectName(QString::fromUtf8("userManage"));
        userManage->resize(721, 513);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userManage->sizePolicy().hasHeightForWidth());
        userManage->setSizePolicy(sizePolicy);
        userManage->setMinimumSize(QSize(60, 0));
        userManage->setStyleSheet(QString::fromUtf8("background-color:white"));
        label = new QLabel(userManage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 10, 221, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setMouseTracking(false);
        label->setContextMenuPolicy(Qt::ActionsContextMenu);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        retrun_pushbutton = new QPushButton(userManage);
        retrun_pushbutton->setObjectName(QString::fromUtf8("retrun_pushbutton"));
        retrun_pushbutton->setEnabled(true);
        retrun_pushbutton->setGeometry(QRect(0, 480, 101, 31));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        retrun_pushbutton->setFont(font1);
        fresh_pushbutton = new QPushButton(userManage);
        fresh_pushbutton->setObjectName(QString::fromUtf8("fresh_pushbutton"));
        fresh_pushbutton->setEnabled(true);
        fresh_pushbutton->setGeometry(QRect(620, 380, 101, 31));
        fresh_pushbutton->setFont(font1);
        label_2 = new QLabel(userManage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 380, 121, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        delete_lineEdit = new QLineEdit(userManage);
        delete_lineEdit->setObjectName(QString::fromUtf8("delete_lineEdit"));
        delete_lineEdit->setGeometry(QRect(140, 380, 121, 31));
        delete_pushbutton = new QPushButton(userManage);
        delete_pushbutton->setObjectName(QString::fromUtf8("delete_pushbutton"));
        delete_pushbutton->setEnabled(true);
        delete_pushbutton->setGeometry(QRect(300, 430, 101, 31));
        delete_pushbutton->setFont(font1);
        label_4 = new QLabel(userManage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 430, 121, 31));
        label_4->setFont(font2);
        retry_lineEdit = new QLineEdit(userManage);
        retry_lineEdit->setObjectName(QString::fromUtf8("retry_lineEdit"));
        retry_lineEdit->setGeometry(QRect(140, 430, 121, 31));
        user_tableview = new QTableWidget(userManage);
        user_tableview->setObjectName(QString::fromUtf8("user_tableview"));
        user_tableview->setGeometry(QRect(-10, 60, 731, 311));
        user_tableview->setSortingEnabled(false);
        user_tableview->horizontalHeader()->setCascadingSectionResizes(false);
        user_tableview->horizontalHeader()->setMinimumSectionSize(29);
        user_tableview->horizontalHeader()->setDefaultSectionSize(120);
        user_tableview->horizontalHeader()->setStretchLastSection(true);
        user_tableview->verticalHeader()->setVisible(false);
        exit_pushbutton = new QPushButton(userManage);
        exit_pushbutton->setObjectName(QString::fromUtf8("exit_pushbutton"));
        exit_pushbutton->setEnabled(true);
        exit_pushbutton->setGeometry(QRect(620, 480, 101, 31));
        exit_pushbutton->setFont(font1);

        retranslateUi(userManage);

        QMetaObject::connectSlotsByName(userManage);
    } // setupUi

    void retranslateUi(QWidget *userManage)
    {
        userManage->setWindowTitle(QCoreApplication::translate("userManage", "Form", nullptr));
        label->setText(QCoreApplication::translate("userManage", "\345\275\223\345\211\215\347\224\250\346\210\267", nullptr));
        retrun_pushbutton->setText(QCoreApplication::translate("userManage", "\350\277\224\345\233\236", nullptr));
        fresh_pushbutton->setText(QCoreApplication::translate("userManage", "\345\210\267\346\226\260", nullptr));
        label_2->setText(QCoreApplication::translate("userManage", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        delete_lineEdit->setText(QCoreApplication::translate("userManage", "\347\224\250\346\210\267\345\220\215", nullptr));
        delete_pushbutton->setText(QCoreApplication::translate("userManage", "\345\210\240\351\231\244", nullptr));
        label_4->setText(QCoreApplication::translate("userManage", "\351\252\214\350\257\201\347\240\201", nullptr));
        retry_lineEdit->setText(QString());
        exit_pushbutton->setText(QCoreApplication::translate("userManage", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userManage: public Ui_userManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGE_H
