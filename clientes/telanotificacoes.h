#ifndef TELANOTIFICACOES_H
#define TELANOTIFICACOES_H

#include <QDialog>

namespace Ui {
class telaNotificacoes;
}

class telaNotificacoes : public QDialog
{
    Q_OBJECT

public:
    explicit telaNotificacoes(QWidget *parent = nullptr, int = 0);
    ~telaNotificacoes();

private slots:
    void on_btn_voltar_clicked();

private:
    Ui::telaNotificacoes *ui;
    int m_id;
};

#endif // TELANOTIFICACOES_H
