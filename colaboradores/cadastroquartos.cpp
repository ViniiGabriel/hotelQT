#include "cadastroquartos.h"
#include "ui_cadastroquartos.h"

cadastroQuartos::cadastroQuartos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroQuartos)
{
    ui->setupUi(this);
}

cadastroQuartos::~cadastroQuartos()
{
    delete ui;
}
