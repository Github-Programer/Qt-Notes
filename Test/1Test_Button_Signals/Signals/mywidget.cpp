#include "mywidget.h"
#include "ui_mywidget.h"
#include <QPushButton>

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    QPushButton * btn = new QPushButton("按钮1", this);
    btn->resize(200, 100);
    btn->move(100, 100);
    connect(btn, &QPushButton::toggled,this, &QWidget::close);
}

myWidget::~myWidget()
{
    delete ui;
}

