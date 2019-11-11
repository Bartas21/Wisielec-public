#include "ui_wisielec.h"
#include "wisielec.h"
#include "qbitmap.h"

Wisielec::Wisielec(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Wisielec)
{

    ui->setupUi(this);

    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap("C:/Users/Tina/Desktop/wisielec/obraz/0.png");
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

Wisielec::~Wisielec()
{
    delete ui;
}


void Wisielec::on_A_clicked()
{
    ui->label->setText("A");
    manager.chek('A');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());

}

void Wisielec::on_B_clicked()
{
    ui->label->setText("B");
    manager.chek('B');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_C_clicked()
{
    ui->label->setText("C");
    manager.chek('C');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));


    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_D_clicked()
{
    ui->label->setText("D");
    manager.chek('D');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));


    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_E_clicked()
{
    ui->label->setText("E");
    manager.chek('E');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));


    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_F_clicked()
{
    ui->label->setText("F");
    manager.chek('F');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));


    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_G_clicked()
{
    ui->label->setText("G");
    manager.chek('G');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_H_clicked()
{
    ui->label->setText("H");
    manager.chek('H');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_I_clicked()
{
    ui->label->setText("I");
    manager.chek('I');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_J_clicked()
{
    ui->label->setText("J");
    manager.chek('J');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_K_clicked()
{
    ui->label->setText("K");
    manager.chek('K');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_L_clicked()
{
    ui->label->setText("L");
    manager.chek('L');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_M_clicked()
{
    ui->label->setText("M");
    manager.chek('M');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_N_clicked()
{
    ui->label->setText("N");
    manager.chek('N');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_O_clicked()
{
    ui->label->setText("O");
    manager.chek('O');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_P_clicked()
{
    ui->label->setText("P");
    manager.chek('P');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_R_clicked()
{
    ui->label->setText("R");
    manager.chek('R');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_S_clicked()
{
    ui->label->setText("S");
    manager.chek('S');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_T_clicked()
{
    ui->label->setText("T");
    manager.chek('T');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_U_clicked()
{
    ui->label->setText("U");
    manager.chek('U');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_W_clicked()
{
    ui->label->setText("W");
    manager.chek('W');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_X_clicked()
{
    ui->label->setText("X");
    manager.chek('X');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_Y_clicked()
{
    ui->label->setText("Y");
    manager.chek('Y');
    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}

void Wisielec::on_Z_clicked()
{
    ui->label->setText("Z");
    manager.chek('Z');

    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap(manager.pic());
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}


void Wisielec::on_RESET_clicked()
{
    manager.new_password();

    ui->label_2->setText(QString::fromStdString(manager.flor_table));

    QPixmap pixmap("C:/Users/Tina/Desktop/wisielec/obraz/0.png");
    ui->label_pic->setPixmap(pixmap);
    ui->label_pic->setMask(pixmap.mask());
}



