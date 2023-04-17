#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_horizontalIncrementingSlider_sliderMoved(int position)
{
    ui->incrementSpinBox->setValue(position);
}


void Widget::on_incrementSpinBox_valueChanged(int arg1)
{
    ui->horizontalIncrementingSlider->setValue(arg1);
}

