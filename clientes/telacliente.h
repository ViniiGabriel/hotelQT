#ifndef TELACLIENTE_H
#define TELACLIENTE_H

#include <QDialog>
#include <QtSql>
namespace Ui {
class telaCliente;
}

class telaCliente : public QDialog
{
    Q_OBJECT

public:
    explicit telaCliente(QWidget *parent = nullptr);
    ~telaCliente();

private:
    Ui::telaCliente *ui;
};

#endif // TELACLIENTE_H
