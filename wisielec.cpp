#include "wisielec.h"
#include "ui_wisielec.h"

Wisielec::Wisielec(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Wisielec)
{
    ui->setupUi(this);
}

Wisielec::~Wisielec()
{
    delete ui;
}
