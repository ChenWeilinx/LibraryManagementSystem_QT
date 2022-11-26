#include "borrowrecord.h"
#include "ui_borrowrecord.h"

BorrowRecord::BorrowRecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BorrowRecord)
{
    ui->setupUi(this);

    ui->comboBox->setEditable(false); //设置不可编辑

    /*设置借书记录表*/
    ui->borrow_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //不能编辑表格
    ui->borrow_tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {"
                                                               "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");//设置表头风格

    ui->borrow_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//行自适应
    //    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch); //列自适应

    /*设置还书记录表*/
    ui->return_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //不能编辑表格
    ui->return_tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {"
                                                               "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");//设置表头风格

    ui->return_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//行自适应
    //    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch); //列自适应

    resettingRecords();
    //管理员提交返回申请
    connect(ui->retrun_pushbutton,&QPushButton::clicked,this,&BorrowRecord::returnLastWindow);
    //管理员提交筛选申请
    connect(ui->filter_pushbutton,&QPushButton::clicked,this,&BorrowRecord::filterRecords);
    //管理员提交退出申请
    connect(ui->exit_pushbutton,&QPushButton::clicked,this,&BorrowRecord::close);
    //用户提交重置申请
    connect(ui->resetting_pushbutton,&QPushButton::clicked,this,&BorrowRecord::resettingRecords);
}

BorrowRecord::~BorrowRecord()
{
    delete ui;
}

void BorrowRecord::freshReturnTable(QString title)
{
    ui->return_tableWidget->clear();
    ui->comboBox->clear();

    QStringList header = {"还书人","所还书籍","还书时间","还书数量"};
    QString sqlstr;
    QSqlQuery query(DataBase::db);
    if(title == nullptr){
        sqlstr = QString("SELECT borrow.`customer_name`,borrow.`title`,borrow.`return_time`,borrow.`return_count` \
FROM   borrow \
WHERE  borrow.`return_time` IS NOT NULL");
    }else{
        sqlstr = QString("SELECT borrow.`customer_name`,borrow.`title`,borrow.`return_time`,borrow.`return_count` \
FROM   borrow \
WHERE  borrow.`return_time` IS NOT NULL AND borrow.`title` = '%1'").arg(title);
    }
    if(!query.exec(sqlstr)){
        qDebug()<<"BorrowRecord::freshReturnTable(QString title) 执行失败";
        qDebug()<<sqlstr;
        return;
    }
    if(query.size() == 0){
        //有待商榷
        return;
    }
    int colcnt = query.record().count();

    ui->return_tableWidget->setColumnCount(colcnt);    //列数
    ui->return_tableWidget->setRowCount(query.size()); //行数
    ui->return_tableWidget->setHorizontalHeaderLabels(header); //设置表头

    QSet<QString> titles;
    short rowcnt = 0;
    while (query.next()) {
        titles.insert(query.value(1).toString());
        for(int i = 0; i < colcnt; i++){
            /*setItem设置条目栏中的一个格子的信息*/
            QTableWidgetItem* item = new QTableWidgetItem(query.value(i).toString());
            // 表格内元素设置字体居中
            item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            ui->return_tableWidget->setItem(rowcnt, i, item);
        }
        rowcnt++;
    }
    for(auto& x : titles) ui->comboBox->addItem(x);
}

void BorrowRecord::freshBorrowTable(QString title)
{
    ui->borrow_tableWidget->clear();
    ui->comboBox->clear();
    QStringList header = {"借书人","所借书籍","借阅时间","借阅数量"};
    QString sqlstr;
    QSqlQuery query(DataBase::db);
    if(title == nullptr){
        sqlstr = QString("SELECT borrow.`customer_name`,borrow.`title`,borrow.`borrow_time`,borrow.`borrow_count` \
FROM   borrow \
WHERE  borrow.`borrow_time` IS NOT NULL");
    }else{
        sqlstr = QString("SELECT borrow.`customer_name`,borrow.`title`,borrow.`borrow_time`,borrow.`borrow_count` \
FROM   borrow \
WHERE  borrow.`borrow_time` IS NOT NULL AND borrow.`title` = '%1'").arg(title);
    }
    if(!query.exec(sqlstr)){
        qDebug()<<"BorrowRecord::freshReturnTable(QString title) 执行失败";
        qDebug()<<sqlstr;
        return;
    }
    if(query.size() == 0){
        //有待商榷
        return;
    }
    int colcnt = query.record().count();

    ui->borrow_tableWidget->setColumnCount(colcnt);    //列数
    ui->borrow_tableWidget->setRowCount(query.size()); //行数
    ui->borrow_tableWidget->setHorizontalHeaderLabels(header); //设置表头

    QSet<QString> titles;
    short rowcnt = 0;
    while (query.next()) {
        titles.insert(query.value(1).toString());
        for(int i = 0; i < colcnt; i++){
            /*setItem设置条目栏中的一个格子的信息*/
            QTableWidgetItem* item = new QTableWidgetItem(query.value(i).toString());
            // 表格内元素设置字体居中
            item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            ui->borrow_tableWidget->setItem(rowcnt, i, item);
        }
        rowcnt++;
    }
    for(auto& x : titles) ui->comboBox->addItem(x);
}

void BorrowRecord::filterRecords()
{
    freshReturnTable(ui->comboBox->currentText());
    freshBorrowTable(ui->comboBox->currentText());
}

void BorrowRecord::resettingRecords()
{
    freshReturnTable();
    freshBorrowTable();
}

void BorrowRecord::returnLastWindow()
{
    this->close();
    ManagerWindow* father = new ManagerWindow;
    father->show();
}
