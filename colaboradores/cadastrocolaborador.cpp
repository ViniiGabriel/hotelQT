#include "cadastrocolaborador.h"
#include "ui_cadastrocolaborador.h"

cadastroColaborador::cadastroColaborador(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroColaborador)
{
    ui->setupUi(this);
}

cadastroColaborador::~cadastroColaborador()
{
    delete ui;
}
