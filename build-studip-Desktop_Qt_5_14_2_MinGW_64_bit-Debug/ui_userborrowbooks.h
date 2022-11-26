/********************************************************************************
** Form generated from reading UI file 'userborrowbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERBORROWBOOKS_H
#define UI_USERBORROWBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserBorrowBooks
{
public:
    QPushButton *enterpersonalcenter_pushbutton;
    QPushButton *retrun_pushbutton;
    QPushButton *filter_pushbutton;
    QPushButton *borrow_pushbutton;
    QPushButton *resetting_pushbutton;
    QLabel *label_3;
    QWidget *widget;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *category_comboBox;
    QComboBox *title_comboBox;
    QComboBox *author_comboBox;
    QComboBox *publisher_comboBox;
    QLabel *label_8;
    QLineEdit *allcount_lineEdit;
    QLabel *label_9;
    QLineEdit *current_lineEdit;
    QLineEdit *title_lineEdit;
    QComboBox *borrow_comboBox;
    QPushButton *search_pushbutton;

    void setupUi(QWidget *UserBorrowBooks)
    {
        if (UserBorrowBooks->objectName().isEmpty())
            UserBorrowBooks->setObjectName(QString::fromUtf8("UserBorrowBooks"));
        UserBorrowBooks->resize(722, 423);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserBorrowBooks->sizePolicy().hasHeightForWidth());
        UserBorrowBooks->setSizePolicy(sizePolicy);
        UserBorrowBooks->setStyleSheet(QString::fromUtf8("`background-color:white"));
        enterpersonalcenter_pushbutton = new QPushButton(UserBorrowBooks);
        enterpersonalcenter_pushbutton->setObjectName(QString::fromUtf8("enterpersonalcenter_pushbutton"));
        enterpersonalcenter_pushbutton->setEnabled(true);
        enterpersonalcenter_pushbutton->setGeometry(QRect(620, 390, 101, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        enterpersonalcenter_pushbutton->setFont(font);
        retrun_pushbutton = new QPushButton(UserBorrowBooks);
        retrun_pushbutton->setObjectName(QString::fromUtf8("retrun_pushbutton"));
        retrun_pushbutton->setEnabled(true);
        retrun_pushbutton->setGeometry(QRect(0, 390, 101, 31));
        retrun_pushbutton->setFont(font);
        filter_pushbutton = new QPushButton(UserBorrowBooks);
        filter_pushbutton->setObjectName(QString::fromUtf8("filter_pushbutton"));
        filter_pushbutton->setEnabled(true);
        filter_pushbutton->setGeometry(QRect(120, 230, 101, 31));
        filter_pushbutton->setFont(font);
        borrow_pushbutton = new QPushButton(UserBorrowBooks);
        borrow_pushbutton->setObjectName(QString::fromUtf8("borrow_pushbutton"));
        borrow_pushbutton->setEnabled(true);
        borrow_pushbutton->setGeometry(QRect(620, 300, 101, 31));
        borrow_pushbutton->setFont(font);
        resetting_pushbutton = new QPushButton(UserBorrowBooks);
        resetting_pushbutton->setObjectName(QString::fromUtf8("resetting_pushbutton"));
        resetting_pushbutton->setEnabled(true);
        resetting_pushbutton->setGeometry(QRect(0, 230, 101, 31));
        resetting_pushbutton->setFont(font);
        label_3 = new QLabel(UserBorrowBooks);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 30, 521, 81));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(50);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);
        widget = new QWidget(UserBorrowBooks);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 120, 721, 101));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 71, 25));
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 30, 61, 25));
        label_5->setFont(font);
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 30, 81, 25));
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setTextFormat(Qt::AutoText);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(440, 30, 71, 25));
        label_7->setFont(font);
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setTextFormat(Qt::AutoText);
        label_7->setAlignment(Qt::AlignCenter);
        category_comboBox = new QComboBox(widget);
        category_comboBox->setObjectName(QString::fromUtf8("category_comboBox"));
        category_comboBox->setGeometry(QRect(10, 60, 91, 31));
        sizePolicy.setHeightForWidth(category_comboBox->sizePolicy().hasHeightForWidth());
        category_comboBox->setSizePolicy(sizePolicy);
        category_comboBox->setStyleSheet(QString::fromUtf8("border:none;"));
        title_comboBox = new QComboBox(widget);
        title_comboBox->setObjectName(QString::fromUtf8("title_comboBox"));
        title_comboBox->setGeometry(QRect(120, 60, 131, 31));
        title_comboBox->setStyleSheet(QString::fromUtf8("border:none;"));
        author_comboBox = new QComboBox(widget);
        author_comboBox->setObjectName(QString::fromUtf8("author_comboBox"));
        author_comboBox->setGeometry(QRect(270, 60, 121, 31));
        author_comboBox->setStyleSheet(QString::fromUtf8("border:none;"));
        publisher_comboBox = new QComboBox(widget);
        publisher_comboBox->setObjectName(QString::fromUtf8("publisher_comboBox"));
        publisher_comboBox->setGeometry(QRect(410, 60, 141, 31));
        publisher_comboBox->setStyleSheet(QString::fromUtf8("border:none;"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 30, 61, 25));
        label_8->setFont(font);
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setTextFormat(Qt::AutoText);
        label_8->setAlignment(Qt::AlignCenter);
        allcount_lineEdit = new QLineEdit(widget);
        allcount_lineEdit->setObjectName(QString::fromUtf8("allcount_lineEdit"));
        allcount_lineEdit->setGeometry(QRect(570, 60, 61, 31));
        allcount_lineEdit->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(660, 30, 61, 25));
        label_9->setFont(font);
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setTextFormat(Qt::AutoText);
        label_9->setAlignment(Qt::AlignCenter);
        current_lineEdit = new QLineEdit(widget);
        current_lineEdit->setObjectName(QString::fromUtf8("current_lineEdit"));
        current_lineEdit->setGeometry(QRect(650, 60, 71, 31));
        current_lineEdit->setAlignment(Qt::AlignCenter);
        title_lineEdit = new QLineEdit(UserBorrowBooks);
        title_lineEdit->setObjectName(QString::fromUtf8("title_lineEdit"));
        title_lineEdit->setGeometry(QRect(420, 230, 191, 31));
        borrow_comboBox = new QComboBox(UserBorrowBooks);
        borrow_comboBox->setObjectName(QString::fromUtf8("borrow_comboBox"));
        borrow_comboBox->setEnabled(true);
        borrow_comboBox->setGeometry(QRect(420, 300, 191, 31));
        sizePolicy1.setHeightForWidth(borrow_comboBox->sizePolicy().hasHeightForWidth());
        borrow_comboBox->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        borrow_comboBox->setFont(font2);
        borrow_comboBox->setMouseTracking(false);
        borrow_comboBox->setTabletTracking(false);
        borrow_comboBox->setAcceptDrops(false);
        borrow_comboBox->setLayoutDirection(Qt::LeftToRight);
        borrow_comboBox->setEditable(true);
        search_pushbutton = new QPushButton(UserBorrowBooks);
        search_pushbutton->setObjectName(QString::fromUtf8("search_pushbutton"));
        search_pushbutton->setEnabled(true);
        search_pushbutton->setGeometry(QRect(620, 230, 101, 31));
        search_pushbutton->setFont(font);

        retranslateUi(UserBorrowBooks);

        QMetaObject::connectSlotsByName(UserBorrowBooks);
    } // setupUi

    void retranslateUi(QWidget *UserBorrowBooks)
    {
        UserBorrowBooks->setWindowTitle(QCoreApplication::translate("UserBorrowBooks", "Form", nullptr));
        enterpersonalcenter_pushbutton->setText(QCoreApplication::translate("UserBorrowBooks", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        retrun_pushbutton->setText(QCoreApplication::translate("UserBorrowBooks", "\350\277\224\345\233\236", nullptr));
        filter_pushbutton->setText(QCoreApplication::translate("UserBorrowBooks", "\347\255\233\351\200\211", nullptr));
        borrow_pushbutton->setText(QCoreApplication::translate("UserBorrowBooks", "\345\200\237\351\230\205", nullptr));
        resetting_pushbutton->setText(QCoreApplication::translate("UserBorrowBooks", "\351\207\215\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("UserBorrowBooks", "\345\233\276\344\271\246\345\200\237\351\230\205", nullptr));
        label->setText(QCoreApplication::translate("UserBorrowBooks", "\347\261\273\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("UserBorrowBooks", "\344\271\246\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("UserBorrowBooks", "\344\275\234\350\200\205", nullptr));
        label_7->setText(QCoreApplication::translate("UserBorrowBooks", "\345\207\272\347\211\210\347\244\276", nullptr));
        category_comboBox->setCurrentText(QString());
        title_comboBox->setCurrentText(QString());
        author_comboBox->setCurrentText(QString());
        publisher_comboBox->setCurrentText(QString());
        label_8->setText(QCoreApplication::translate("UserBorrowBooks", "\346\200\273\351\207\217", nullptr));
        allcount_lineEdit->setText(QString());
        label_9->setText(QCoreApplication::translate("UserBorrowBooks", "\345\211\251\344\275\231\351\207\217", nullptr));
        current_lineEdit->setText(QString());
        title_lineEdit->setText(QCoreApplication::translate("UserBorrowBooks", "\344\271\246\345\220\215", nullptr));
        search_pushbutton->setText(QCoreApplication::translate("UserBorrowBooks", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserBorrowBooks: public Ui_UserBorrowBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERBORROWBOOKS_H
