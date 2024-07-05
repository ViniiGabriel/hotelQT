#ifndef TELACLIENTE_H
#define TELACLIENTE_H

#include <QDialog>
#include <QtSql>
#include "../colaboradores/listaQuartos/telafiltrar.h"


namespace Ui {
class telaCliente;
}

class telaCliente : public QDialog
{
    Q_OBJECT

public:
    explicit telaCliente(QWidget *parent = nullptr, int id=0);
    ~telaCliente();

private slots:
    void on_btn_reservas_clicked();

    void on_btn_notificacoes_clicked();

    void on_tb_menu_cellDoubleClicked();

    void on_btn_servico_clicked();

    void on_btn_filtrar_clicked();

    void on_btn_aplicarFiltros_clicked();

private:
    Ui::telaCliente *ui;
    int m_id;
    telaFiltrar *tela;
};

#endif // TELACLIENTE_H
