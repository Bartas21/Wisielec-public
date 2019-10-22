#include "wisielec.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Wisielec w;
    w.show();
    return a.exec();
}
