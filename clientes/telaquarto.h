#ifndef TELAQUARTO_H
#define TELAQUARTO_H

#include <QDialog>
#include "telaPagamento/pagamentotela.h"

namespace Ui {
class telaQuarto;
}

class telaQuarto : public QDialog
{
    Q_OBJECT

public:
    explicit telaQuarto(QWidget *parent = nullptr, int id = 0, int idCliente = 0);
    ~telaQuarto();

private slots:

    void on_btn_reserva_clicked();

    void on_btn_voltar_clicked();

private:
    Ui::telaQuarto *ui;
    int m_id;
    int m_idCliente;
    pagamentoTela *tela;
};

#endif // TELAQUARTO_H
