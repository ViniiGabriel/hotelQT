#ifndef CADASTROCOLABORADOR_H
#define CADASTROCOLABORADOR_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class cadastroColaborador;
}

class cadastroColaborador : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroColaborador(QWidget *parent = nullptr);
    ~cadastroColaborador();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cadastroColaborador *ui;
};

#endif // CADASTROCOLABORADOR_H
