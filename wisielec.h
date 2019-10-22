#ifndef WISIELEC_H
#define WISIELEC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Wisielec; }
QT_END_NAMESPACE

class Wisielec : public QMainWindow
{
    Q_OBJECT

public:
    Wisielec(QWidget *parent = nullptr);
    ~Wisielec();

private:
    Ui::Wisielec *ui;
};
#endif // WISIELEC_H
