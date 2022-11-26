/********************************************************************************
** Form generated from reading UI file 'personalcenter.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALCENTER_H
#define UI_PERSONALCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonalCenter
{
public:
    QTabWidget *tabWidget;
    QWidget *personnal_QWidget;
    QLabel *image_label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *x;
    QLabel *label_5;
    QComboBox *change_comboBox;
    QLabel *label_6;
    QLineEdit *change_lineEdit;
    QPushButton *change_pushbutton;
    QLabel *username_label;
    QLabel *gender_label;
    QLabel *password_label;
    QLabel *cteatedate_label;
    QLabel *type_label;
    QWidget *tab_2;
    QTableWidget *borrowbook_tableWidget;
    QLabel *borrowbook_label;
    QWidget *tb;
    QTableWidget *return_tableWidget;
    QLabel *returnbook_label;
    QPushButton *retrun_pushbutton;
    QPushButton *exit_pushbutton;

    void setupUi(QWidget *PersonalCenter)
    {
        if (PersonalCenter->objectName().isEmpty())
            PersonalCenter->setObjectName(QString::fromUtf8("PersonalCenter"));
        PersonalCenter->resize(544, 412);
        tabWidget = new QTabWidget(PersonalCenter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 551, 381));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color:white"));
        personnal_QWidget = new QWidget();
        personnal_QWidget->setObjectName(QString::fromUtf8("personnal_QWidget"));
        image_label = new QLabel(personnal_QWidget);
        image_label->setObjectName(QString::fromUtf8("image_label"));
        image_label->setGeometry(QRect(20, 20, 251, 271));
        image_label->setFrameShape(QFrame::Box);
        label_2 = new QLabel(personnal_QWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 20, 101, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(personnal_QWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 80, 101, 41));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        x = new QLabel(personnal_QWidget);
        x->setObjectName(QString::fromUtf8("x"));
        x->setGeometry(QRect(280, 190, 101, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        x->setFont(font1);
        x->setFrameShape(QFrame::NoFrame);
        x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(personnal_QWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 250, 101, 41));
        label_5->setFont(font);
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        change_comboBox = new QComboBox(personnal_QWidget);
        change_comboBox->addItem(QString());
        change_comboBox->addItem(QString());
        change_comboBox->addItem(QString());
        change_comboBox->setObjectName(QString::fromUtf8("change_comboBox"));
        change_comboBox->setGeometry(QRect(20, 310, 101, 31));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        change_comboBox->setFont(font2);
        change_comboBox->setStyleSheet(QString::fromUtf8("border:none;"));
        label_6 = new QLabel(personnal_QWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 140, 101, 41));
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        change_lineEdit = new QLineEdit(personnal_QWidget);
        change_lineEdit->setObjectName(QString::fromUtf8("change_lineEdit"));
        change_lineEdit->setGeometry(QRect(130, 310, 141, 31));
        change_lineEdit->setStyleSheet(QString::fromUtf8("font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light'; \n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);\n"
"border-radius:15px;"));
        change_pushbutton = new QPushButton(personnal_QWidget);
        change_pushbutton->setObjectName(QString::fromUtf8("change_pushbutton"));
        change_pushbutton->setEnabled(true);
        change_pushbutton->setGeometry(QRect(280, 310, 101, 31));
        change_pushbutton->setFont(font);
        username_label = new QLabel(personnal_QWidget);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(390, 20, 131, 41));
        username_label->setFont(font);
        username_label->setFrameShape(QFrame::NoFrame);
        username_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gender_label = new QLabel(personnal_QWidget);
        gender_label->setObjectName(QString::fromUtf8("gender_label"));
        gender_label->setGeometry(QRect(390, 80, 111, 41));
        gender_label->setFont(font);
        gender_label->setFrameShape(QFrame::NoFrame);
        gender_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        password_label = new QLabel(personnal_QWidget);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(390, 140, 121, 41));
        password_label->setFont(font);
        password_label->setFrameShape(QFrame::NoFrame);
        password_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cteatedate_label = new QLabel(personnal_QWidget);
        cteatedate_label->setObjectName(QString::fromUtf8("cteatedate_label"));
        cteatedate_label->setGeometry(QRect(390, 190, 141, 41));
        cteatedate_label->setFont(font);
        cteatedate_label->setFrameShape(QFrame::NoFrame);
        cteatedate_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        type_label = new QLabel(personnal_QWidget);
        type_label->setObjectName(QString::fromUtf8("type_label"));
        type_label->setGeometry(QRect(390, 250, 141, 41));
        type_label->setFont(font);
        type_label->setFrameShape(QFrame::NoFrame);
        type_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tabWidget->addTab(personnal_QWidget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        borrowbook_tableWidget = new QTableWidget(tab_2);
        borrowbook_tableWidget->setObjectName(QString::fromUtf8("borrowbook_tableWidget"));
        borrowbook_tableWidget->setGeometry(QRect(0, 0, 541, 281));
        borrowbook_label = new QLabel(tab_2);
        borrowbook_label->setObjectName(QString::fromUtf8("borrowbook_label"));
        borrowbook_label->setGeometry(QRect(210, 310, 131, 31));
        QFont font3;
        font3.setPointSize(15);
        borrowbook_label->setFont(font3);
        borrowbook_label->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_2, QString());
        tb = new QWidget();
        tb->setObjectName(QString::fromUtf8("tb"));
        return_tableWidget = new QTableWidget(tb);
        return_tableWidget->setObjectName(QString::fromUtf8("return_tableWidget"));
        return_tableWidget->setGeometry(QRect(0, 0, 541, 281));
        returnbook_label = new QLabel(tb);
        returnbook_label->setObjectName(QString::fromUtf8("returnbook_label"));
        returnbook_label->setGeometry(QRect(210, 310, 131, 31));
        returnbook_label->setFont(font3);
        returnbook_label->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tb, QString());
        retrun_pushbutton = new QPushButton(PersonalCenter);
        retrun_pushbutton->setObjectName(QString::fromUtf8("retrun_pushbutton"));
        retrun_pushbutton->setEnabled(true);
        retrun_pushbutton->setGeometry(QRect(0, 380, 101, 31));
        retrun_pushbutton->setFont(font);
        exit_pushbutton = new QPushButton(PersonalCenter);
        exit_pushbutton->setObjectName(QString::fromUtf8("exit_pushbutton"));
        exit_pushbutton->setEnabled(true);
        exit_pushbutton->setGeometry(QRect(450, 380, 101, 31));
        exit_pushbutton->setFont(font);

        retranslateUi(PersonalCenter);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(PersonalCenter);
    } // setupUi

    void retranslateUi(QWidget *PersonalCenter)
    {
        PersonalCenter->setWindowTitle(QCoreApplication::translate("PersonalCenter", "Form", nullptr));
        image_label->setText(QCoreApplication::translate("PersonalCenter", "\345\244\264\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("PersonalCenter", "\345\247\223\345\220\215:", nullptr));
        label_3->setText(QCoreApplication::translate("PersonalCenter", "\346\200\247\345\210\253:", nullptr));
        x->setText(QCoreApplication::translate("PersonalCenter", "\345\273\272\346\210\267\346\227\245\346\234\237:", nullptr));
        label_5->setText(QCoreApplication::translate("PersonalCenter", "\347\273\204\345\210\253:", nullptr));
        change_comboBox->setItemText(0, QCoreApplication::translate("PersonalCenter", "\345\247\223\345\220\215", nullptr));
        change_comboBox->setItemText(1, QCoreApplication::translate("PersonalCenter", "\346\200\247\345\210\253", nullptr));
        change_comboBox->setItemText(2, QCoreApplication::translate("PersonalCenter", "\345\257\206\347\240\201", nullptr));

        label_6->setText(QCoreApplication::translate("PersonalCenter", "\345\257\206\347\240\201:", nullptr));
        change_pushbutton->setText(QCoreApplication::translate("PersonalCenter", "\344\277\256\346\224\271", nullptr));
        username_label->setText(QCoreApplication::translate("PersonalCenter", "\351\231\210\344\274\237lin", nullptr));
        gender_label->setText(QCoreApplication::translate("PersonalCenter", "man", nullptr));
        password_label->setText(QCoreApplication::translate("PersonalCenter", "\351\231\210\344\274\237lin", nullptr));
        cteatedate_label->setText(QCoreApplication::translate("PersonalCenter", "\351\231\210\344\274\237lin", nullptr));
        type_label->setText(QCoreApplication::translate("PersonalCenter", "\351\231\210\344\274\237lin", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(personnal_QWidget), QCoreApplication::translate("PersonalCenter", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        borrowbook_label->setText(QCoreApplication::translate("PersonalCenter", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PersonalCenter", "\345\200\237\344\271\246\350\256\260\345\275\225", nullptr));
        returnbook_label->setText(QCoreApplication::translate("PersonalCenter", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tb), QCoreApplication::translate("PersonalCenter", "\350\277\230\344\271\246\350\256\260\345\275\225", nullptr));
        retrun_pushbutton->setText(QCoreApplication::translate("PersonalCenter", "\350\277\224\345\233\236", nullptr));
        exit_pushbutton->setText(QCoreApplication::translate("PersonalCenter", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonalCenter: public Ui_PersonalCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALCENTER_H
