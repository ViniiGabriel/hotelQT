#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H

#include <QDialog>

namespace Ui {
class listaClientes;
}

class listaClientes : public QDialog
{
    Q_OBJECT

public:
    explicit listaClientes(QWidget *parent = nullptr);
    ~listaClientes();

private:
    Ui::listaClientes *ui;
};

#endif // LISTACLIENTES_H
