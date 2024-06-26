#ifndef RESERVASTELA_H
#define RESERVASTELA_H

#include <QDialog>

namespace Ui {
class reservasTela;
}

class reservasTela : public QDialog
{
    Q_OBJECT

public:
    explicit reservasTela(QWidget *parent = nullptr);
    ~reservasTela();

private:
    Ui::reservasTela *ui;
};

#endif // RESERVASTELA_H
