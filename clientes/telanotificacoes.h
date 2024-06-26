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
    explicit telaNotificacoes(QWidget *parent = nullptr);
    ~telaNotificacoes();

private:
    Ui::telaNotificacoes *ui;
};

#endif // TELANOTIFICACOES_H
