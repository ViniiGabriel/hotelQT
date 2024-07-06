/********************************************************************************
** Form generated from reading UI file 'telanotificacoescolaborador.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELANOTIFICACOESCOLABORADOR_H
#define UI_TELANOTIFICACOESCOLABORADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_telaNotificacoesColaborador
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tb_notificacoes;
    QLabel *label;

    void setupUi(QDialog *telaNotificacoesColaborador)
    {
        if (telaNotificacoesColaborador->objectName().isEmpty())
            telaNotificacoesColaborador->setObjectName("telaNotificacoesColaborador");
        telaNotificacoesColaborador->resize(651, 353);
        telaNotificacoesColaborador->setAcceptDrops(false);
        buttonBox = new QDialogButtonBox(telaNotificacoesColaborador);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(290, 310, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tb_notificacoes = new QTableWidget(telaNotificacoesColaborador);
        tb_notificacoes->setObjectName("tb_notificacoes");
        tb_notificacoes->setGeometry(QRect(10, 50, 631, 251));
        label = new QLabel(telaNotificacoesColaborador);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 281, 51));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(telaNotificacoesColaborador);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telaNotificacoesColaborador, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telaNotificacoesColaborador, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telaNotificacoesColaborador);
    } // setupUi

    void retranslateUi(QDialog *telaNotificacoesColaborador)
    {
        telaNotificacoesColaborador->setWindowTitle(QCoreApplication::translate("telaNotificacoesColaborador", "Notifica\303\247\303\265es", nullptr));
        label->setText(QCoreApplication::translate("telaNotificacoesColaborador", "Notifica\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaNotificacoesColaborador: public Ui_telaNotificacoesColaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELANOTIFICACOESCOLABORADOR_H
