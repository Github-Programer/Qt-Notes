#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个老师对象
    this->tc = new Teacher(this);
    //创建一个学生对象
    this->st = new Student(this);

    //老师饿了 学生请客连接==
    connect(tc, &Teacher::hungry, st, &Student::treat);

    //调用下课函数
    classIsOver();
}

void Widget::classIsOver()
{
    //下课函数 调用后 触发老师饿了的信号
    emit tc->hungry(); //成功触发  使用emit关键字

}

Widget::~Widget()
{
    delete ui;
}

