#ifndef TELAQUARTO_H
#define TELAQUARTO_H

#include <QDialog>

namespace Ui {
class telaQuarto;
}

class telaQuarto : public QDialog
{
    Q_OBJECT

public:
    explicit telaQuarto(QWidget *parent = nullptr);
    ~telaQuarto();

private:
    Ui::telaQuarto *ui;
};

#endif // TELAQUARTO_H
