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

private:
    Ui::telaFiltrar *ui;
};

#endif // TELAFILTRAR_H
