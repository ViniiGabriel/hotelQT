#ifndef TELAAVALIACAO_H
#define TELAAVALIACAO_H

#include <QDialog>

namespace Ui {
class telaAvaliacao;
}

class telaAvaliacao : public QDialog
{
    Q_OBJECT

public:
    explicit telaAvaliacao(QWidget *parent = nullptr, int id=0);
    ~telaAvaliacao();

private slots:
    void on_btn_enviar_clicked();

private:
    Ui::telaAvaliacao *ui;
    int m_id;
};

#endif // TELAAVALIACAO_H
