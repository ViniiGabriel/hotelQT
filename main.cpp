#include "telainicial.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    telaInicial w;
    w.show();
    return a.exec();
}
