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

private slots:
    void on_tb_menu_cellDoubleClicked(int row, int column);

    void on_btn_reservas_clicked();

    void on_btn_notificacoes_clicked();

    void on_btn_avaliacoes_clicked();

private:
    Ui::telaCliente *ui;
};

#endif // TELACLIENTE_H
