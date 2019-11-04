#include "wisielec.h"
#include "ui_wisielec.h"
#include <QFile>
#include <QDebug>
#include <QBuffer>
#include <QRandomGenerator>

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

void Draw(int score = 0)
{
    if (score >= 1)
        QPixmap pix("1.png", false, false);
    else
        QPixmap pix("", false, false);

    if (score >= 2)
        QPixmap pix("2.png", false, false);
    else
        QPixmap pix("", false, false);

    if (score >= 3)
        QPixmap pix("3.png", false, false);
    else
        QPixmap pix("", false, false);

    if (score == 4)
        QPixmap pix("4.png", false, false);
    else
        QPixmap pix("", false, false);

    if (score == 5)
        QPixmap pix("5.png ", false, false);
    else
        QPixmap pix("", false, false);

    if (score >= 6)
        QPixmap pix("6.png", false, false);
    else
        QPixmap pix("", false, false);

    if (score >= 7)
        QPixmap pix("7.png", false, false);
    else
        QPixmap pix("", false, false);

}

void Wisielec::chooseRandomWord()
{
    QMutexLocker locker(&m_lock);
    if (m_wordList.isEmpty())
        return;

    m_word = m_wordList.at(QRandomGenerator::global()->bounded(m_wordList.size()));
    emit wordChanged();
}

void Wisielec::initWordList()
{
    QMutexLocker locker(&m_lock);
    QFile file(":/stolice.txt");
    if (file.open(QIODevice::ReadOnly)) {
        QByteArray allData = file.readAll();
        QBuffer buffer(&allData);
        if (!buffer.open(QIODevice::ReadOnly))
            qFatal("Couldn't open buffer for reading!");

        while (!buffer.atEnd()) {
            QByteArray ba = buffer.readLine().trimmed().toUpper();
            if (!ba.isEmpty() && ba.length() < 10)
                m_wordList.append(QString::fromLatin1(ba));
        }
    }

    chooseRandomWord();
}

void Wisielec::on_A_clicked()
{
    ui->label->setText("A");
}

void Wisielec::on_B_clicked()
{
    ui->label->setText("B");
}

void Wisielec::on_C_clicked()
{
    ui->label->setText("C");
}


void Wisielec::on_D_clicked()
{
    ui->label->setText("D");
}

void Wisielec::on_E_clicked()
{
    ui->label->setText("E");
}

void Wisielec::on_F_clicked()
{
    ui->label->setText("F");
}

void Wisielec::on_G_clicked()
{
    ui->label->setText("G");
}

void Wisielec::on_H_clicked()
{
    ui->label->setText("H");
}

void Wisielec::on_I_clicked()
{
    ui->label->setText("I");
}

void Wisielec::on_J_clicked()
{
    ui->label->setText("J");
}

void Wisielec::on_K_clicked()
{
    ui->label->setText("K");
}

void Wisielec::on_L_clicked()
{
    ui->label->setText("L");
}

void Wisielec::on_M_clicked()
{
    ui->label->setText("M");
}

void Wisielec::on_N_clicked()
{
    ui->label->setText("N");
}

void Wisielec::on_O_clicked()
{
    ui->label->setText("O");
}

void Wisielec::on_P_clicked()
{
    ui->label->setText("P");
}

void Wisielec::on_R_clicked()
{
    ui->label->setText("R");
}

void Wisielec::on_S_clicked()
{
    ui->label->setText("S");
}

void Wisielec::on_T_clicked()
{
    ui->label->setText("T");
}

void Wisielec::on_U_clicked()
{
    ui->label->setText("U");
}

void Wisielec::on_W_clicked()
{
    ui->label->setText("W");
}

void Wisielec::on_X_clicked()
{
    ui->label->setText("X");
}

void Wisielec::on_Y_clicked()
{
    ui->label->setText("Y");
}

void Wisielec::on_Z_clicked()
{
    ui->label->setText("Z");
}
