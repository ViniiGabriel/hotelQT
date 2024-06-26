#ifndef CADASTROCLIENTE_H
#define CADASTROCLIENTE_H

#include <QDialog>

namespace Ui {
class cadastroCliente;
}

class cadastroCliente : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroCliente(QWidget *parent = nullptr);
    ~cadastroCliente();

private slots:
    void on_btn_cadastrar_clicked();

private:
    Ui::cadastroCliente *ui;
};

#endif // CADASTROCLIENTE_H
