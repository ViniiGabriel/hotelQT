#ifndef TELAFILTRAR_H
#define TELAFILTRAR_H

#include <QDialog>

namespace Ui {
class telaFiltrar;
}

class telaFiltrar : public QDialog
{
    Q_OBJECT

public:
    explicit telaFiltrar(QWidget *parent = nullptr);
    ~telaFiltrar();

    bool wifiTrue();
    bool arTrue();
    bool tvTrue();
    bool sacadaTrue();
    bool roupaoTrue();
    bool higieneTrue();
    bool cofreTrue();
    bool banheiraTrue();
    bool cafeTrue();
    bool servicoTrue();
    bool miniBarTrue();

private slots:


private:
    Ui::telaFiltrar *ui;
};

#endif // TELAFILTRAR_H
