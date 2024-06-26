#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QDialog>
#include <QtSql>
namespace Ui {
class telaLogin;
}

class telaLogin : public QDialog
{
    Q_OBJECT

public:
    explicit telaLogin(QWidget *parent = nullptr);
    ~telaLogin();

private slots:
    void on_btn_login_clicked();

    void on_btn_cadastro_clicked();

private:
    Ui::telaLogin *ui;
};

#endif // TELALOGIN_H
