#ifndef CADASTROQUARTOS_H
#define CADASTROQUARTOS_H

#include <QDialog>

namespace Ui {
class cadastroQuartos;
}

class cadastroQuartos : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroQuartos(QWidget *parent = nullptr);
    ~cadastroQuartos();

private slots:
    void on_btn_salvar_clicked();

    void on_btn_cancelar_clicked();

    void on_btn_imagen_clicked();

    void on_boxTipoQuarto_currentTextChanged();

private:
    Ui::cadastroQuartos *ui;
};

#endif // CADASTROQUARTOS_H
