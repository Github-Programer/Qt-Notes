#include "mywidget.h"
#include "ui_mywidget.h"
#include <QPushButton>
#include <qDebug>

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    resize(600, 400);
    QPushButton * btn = new QPushButton("关闭窗口", this);
    btn->resize(100, 100);
    btn->move(100, 100);
    connect(btn, &QPushButton::clicked, this, &QWidget::close);
}

myWidget::~myWidget() //这应该是析构函数
{
    qDebug() << "我的按钮类析构" << endl;
    delete ui; //删除类时删除ui
}


void myWidget::on_pushButton_clicked()
{
    QWidget::close();
}
