/********************************************************************************
** Form generated from reading UI file 'borrowrecord.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWRECORD_H
#define UI_BORROWRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowRecord
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *borrow_tableWidget;
    QWidget *tab_2;
    QTableWidget *return_tableWidget;
    QPushButton *filter_pushbutton;
    QComboBox *comboBox;
    QPushButton *retrun_pushbutton;
    QPushButton *exit_pushbutton;
    QPushButton *resetting_pushbutton;

    void setupUi(QWidget *BorrowRecord)
    {
        if (BorrowRecord->objectName().isEmpty())
            BorrowRecord->setObjectName(QString::fromUtf8("BorrowRecord"));
        BorrowRecord->resize(549, 289);
        tabWidget = new QTabWidget(BorrowRecord);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 551, 201));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        borrow_tableWidget = new QTableWidget(tab);
        borrow_tableWidget->setObjectName(QString::fromUtf8("borrow_tableWidget"));
        borrow_tableWidget->setGeometry(QRect(0, 1, 551, 171));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        return_tableWidget = new QTableWidget(tab_2);
        return_tableWidget->setObjectName(QString::fromUtf8("return_tableWidget"));
        return_tableWidget->setGeometry(QRect(0, 1, 551, 171));
        tabWidget->addTab(tab_2, QString());
        filter_pushbutton = new QPushButton(BorrowRecord);
        filter_pushbutton->setObjectName(QString::fromUtf8("filter_pushbutton"));
        filter_pushbutton->setEnabled(true);
        filter_pushbutton->setGeometry(QRect(450, 210, 101, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        filter_pushbutton->setFont(font);
        comboBox = new QComboBox(BorrowRecord);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(250, 210, 191, 31));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        comboBox->setFont(font1);
        comboBox->setMouseTracking(false);
        comboBox->setTabletTracking(false);
        comboBox->setAcceptDrops(false);
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setEditable(true);
        retrun_pushbutton = new QPushButton(BorrowRecord);
        retrun_pushbutton->setObjectName(QString::fromUtf8("retrun_pushbutton"));
        retrun_pushbutton->setEnabled(true);
        retrun_pushbutton->setGeometry(QRect(0, 260, 101, 31));
        retrun_pushbutton->setFont(font);
        exit_pushbutton = new QPushButton(BorrowRecord);
        exit_pushbutton->setObjectName(QString::fromUtf8("exit_pushbutton"));
        exit_pushbutton->setEnabled(true);
        exit_pushbutton->setGeometry(QRect(450, 260, 101, 31));
        exit_pushbutton->setFont(font);
        resetting_pushbutton = new QPushButton(BorrowRecord);
        resetting_pushbutton->setObjectName(QString::fromUtf8("resetting_pushbutton"));
        resetting_pushbutton->setEnabled(true);
        resetting_pushbutton->setGeometry(QRect(0, 210, 101, 31));
        resetting_pushbutton->setFont(font);

        retranslateUi(BorrowRecord);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BorrowRecord);
    } // setupUi

    void retranslateUi(QWidget *BorrowRecord)
    {
        BorrowRecord->setWindowTitle(QCoreApplication::translate("BorrowRecord", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("BorrowRecord", "\345\200\237\344\271\246\350\256\260\345\275\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("BorrowRecord", "\350\277\230\344\271\246\350\256\260\345\275\225", nullptr));
        filter_pushbutton->setText(QCoreApplication::translate("BorrowRecord", "\346\237\245\347\234\213", nullptr));
        retrun_pushbutton->setText(QCoreApplication::translate("BorrowRecord", "\350\277\224\345\233\236", nullptr));
        exit_pushbutton->setText(QCoreApplication::translate("BorrowRecord", "\351\200\200\345\207\272", nullptr));
        resetting_pushbutton->setText(QCoreApplication::translate("BorrowRecord", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BorrowRecord: public Ui_BorrowRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWRECORD_H
