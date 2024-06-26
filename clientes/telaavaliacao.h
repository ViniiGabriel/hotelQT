#ifndef TELAAVALIACAO_H
#define TELAAVALIACAO_H

#include <QDialog>

namespace Ui {
class telaAvaliacao;
}

class telaAvaliacao : public QDialog
{
    Q_OBJECT

public:
    explicit telaAvaliacao(QWidget *parent = nullptr);
    ~telaAvaliacao();

private:
    Ui::telaAvaliacao *ui;
};

#endif // TELAAVALIACAO_H
