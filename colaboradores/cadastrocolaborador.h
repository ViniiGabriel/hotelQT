#ifndef CADASTROCOLABORADOR_H
#define CADASTROCOLABORADOR_H

#include <QDialog>

namespace Ui {
class cadastroColaborador;
}

class cadastroColaborador : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroColaborador(QWidget *parent = nullptr);
    ~cadastroColaborador();

private:
    Ui::cadastroColaborador *ui;
};

#endif // CADASTROCOLABORADOR_H
