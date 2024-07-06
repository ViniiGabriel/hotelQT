#ifndef TELANOTIFICACOESCOLABORADOR_H
#define TELANOTIFICACOESCOLABORADOR_H

#include <QDialog>

namespace Ui {
class telaNotificacoesColaborador;
}

class telaNotificacoesColaborador : public QDialog
{
    Q_OBJECT

public:
    explicit telaNotificacoesColaborador(QWidget *parent = nullptr);
    ~telaNotificacoesColaborador();

private slots:
    void on_pushButton_clicked();

private:
    Ui::telaNotificacoesColaborador *ui;
};

#endif // TELANOTIFICACOESCOLABORADOR_H
