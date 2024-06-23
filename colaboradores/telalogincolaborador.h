#ifndef TELALOGINCOLABORADOR_H
#define TELALOGINCOLABORADOR_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class telaLoginColaborador;
}

class telaLoginColaborador : public QDialog
{
    Q_OBJECT

public:
    explicit telaLoginColaborador(QWidget *parent = nullptr);
    ~telaLoginColaborador();

private slots:
    void on_btn_login_clicked();

private:
    Ui::telaLoginColaborador *ui;
};

#endif // TELALOGINCOLABORADOR_H
