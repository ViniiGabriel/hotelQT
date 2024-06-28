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
    void on_buttonBox_accepted();

private:
    Ui::cadastroQuartos *ui;
};

#endif // CADASTROQUARTOS_H
