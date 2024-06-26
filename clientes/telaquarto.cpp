#include "telaquarto.h"
#include "ui_telaquarto.h"

telaQuarto::telaQuarto(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaQuarto)
{
    ui->setupUi(this);
}

telaQuarto::~telaQuarto()
{
    delete ui;
}
