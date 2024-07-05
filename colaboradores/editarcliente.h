#ifndef EDITARCLIENTE_H
#define EDITARCLIENTE_H

#include <QDialog>

namespace Ui {
class editarCliente;
}

class editarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit editarCliente(QWidget *parent = nullptr, int id = 0);
    ~editarCliente();

private slots:
    void on_btn_cadastrar_clicked();

private:
    Ui::editarCliente *ui;
    int m_id;
};

#endif // EDITARCLIENTE_H
