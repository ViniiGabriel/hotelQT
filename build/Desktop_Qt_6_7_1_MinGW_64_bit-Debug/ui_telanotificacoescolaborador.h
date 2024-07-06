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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_telaNotificacoesColaborador
{
public:
    QTableWidget *tb_notificacoes;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *telaNotificacoesColaborador)
    {
        if (telaNotificacoesColaborador->objectName().isEmpty())
            telaNotificacoesColaborador->setObjectName("telaNotificacoesColaborador");
        telaNotificacoesColaborador->resize(651, 353);
        telaNotificacoesColaborador->setAcceptDrops(false);
        telaNotificacoesColaborador->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: #cffdff;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #afdcde;\n"
"	border-radius: 14px;\n"
"	border: 2px solid #3d5557;\n"
"	color: #3d5557;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	background-color: #b9faf4;\n"
"}\n"
"\n"
"\n"
"QLabel{\n"
"	color: #3d5557;\n"
"	font-weight:bold;\n"
"}\n"
"\n"
"QTableWidget {\n"
"	background-color: #ebfffd;\n"
"	border: 1px solid #3d5557;\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"	background-color: #9db3b1;\n"
"	font-weight: bold;\n"
"}"));
        tb_notificacoes = new QTableWidget(telaNotificacoesColaborador);
        tb_notificacoes->setObjectName("tb_notificacoes");
        tb_notificacoes->setGeometry(QRect(10, 50, 631, 251));
        label = new QLabel(telaNotificacoesColaborador);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 281, 51));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(telaNotificacoesColaborador);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(522, 320, 121, 29));

        retranslateUi(telaNotificacoesColaborador);

        QMetaObject::connectSlotsByName(telaNotificacoesColaborador);
    } // setupUi

    void retranslateUi(QDialog *telaNotificacoesColaborador)
    {
        telaNotificacoesColaborador->setWindowTitle(QCoreApplication::translate("telaNotificacoesColaborador", "Notifica\303\247\303\265es", nullptr));
        label->setText(QCoreApplication::translate("telaNotificacoesColaborador", "Notifica\303\247\303\265es", nullptr));
        pushButton->setText(QCoreApplication::translate("telaNotificacoesColaborador", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaNotificacoesColaborador: public Ui_telaNotificacoesColaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELANOTIFICACOESCOLABORADOR_H
