#ifndef TELACOLABORADOR_H
#define TELACOLABORADOR_H

#include <QDialog>
#include <QtSql>
namespace Ui {
class telaColaborador;
}

class telaColaborador : public QDialog
{
    Q_OBJECT

public:
    explicit telaColaborador(QWidget *parent = nullptr, QString nome = "");
    ~telaColaborador();

private slots:

    void on_btn_cadastroQuarto_clicked();

    void on_btn_listaQuartos_clicked();

private:
    Ui::telaColaborador *ui;
    QString m_name;
};

#endif // TELACOLABORADOR_H
