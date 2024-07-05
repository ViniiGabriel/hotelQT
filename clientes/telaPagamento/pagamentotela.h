#ifndef PAGAMENTOTELA_H
#define PAGAMENTOTELA_H

#include <QDialog>

namespace Ui {
class pagamentoTela;
}

class pagamentoTela : public QDialog
{
    Q_OBJECT

public:
    explicit pagamentoTela(QWidget *parent = nullptr);
    ~pagamentoTela();
    bool getVerifPagamento() {return verificaPagamento;}

private slots:
    void on_btn_finalizar_clicked();

private:
    Ui::pagamentoTela *ui;
    bool verificaPagamento = false;
};

#endif // PAGAMENTOTELA_H
