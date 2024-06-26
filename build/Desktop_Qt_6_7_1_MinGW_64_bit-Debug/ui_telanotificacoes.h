/********************************************************************************
** Form generated from reading UI file 'telanotificacoes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELANOTIFICACOES_H
#define UI_TELANOTIFICACOES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_telaNotificacoes
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tb_reservas;
    QLabel *label;

    void setupUi(QDialog *telaNotificacoes)
    {
        if (telaNotificacoes->objectName().isEmpty())
            telaNotificacoes->setObjectName("telaNotificacoes");
        telaNotificacoes->resize(653, 348);
        buttonBox = new QDialogButtonBox(telaNotificacoes);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(300, 310, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tb_reservas = new QTableWidget(telaNotificacoes);
        tb_reservas->setObjectName("tb_reservas");
        tb_reservas->setGeometry(QRect(10, 50, 631, 251));
        label = new QLabel(telaNotificacoes);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 281, 41));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(telaNotificacoes);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telaNotificacoes, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telaNotificacoes, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telaNotificacoes);
    } // setupUi

    void retranslateUi(QDialog *telaNotificacoes)
    {
        telaNotificacoes->setWindowTitle(QCoreApplication::translate("telaNotificacoes", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telaNotificacoes", "Notifica\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaNotificacoes: public Ui_telaNotificacoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELANOTIFICACOES_H
