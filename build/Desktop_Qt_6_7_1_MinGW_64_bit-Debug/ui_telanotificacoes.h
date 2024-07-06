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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_telaNotificacoes
{
public:
    QTableWidget *tb_notificacoes;
    QLabel *label;
    QPushButton *btn_voltar;

    void setupUi(QDialog *telaNotificacoes)
    {
        if (telaNotificacoes->objectName().isEmpty())
            telaNotificacoes->setObjectName("telaNotificacoes");
        telaNotificacoes->resize(653, 348);
        telaNotificacoes->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        tb_notificacoes = new QTableWidget(telaNotificacoes);
        tb_notificacoes->setObjectName("tb_notificacoes");
        tb_notificacoes->setGeometry(QRect(10, 50, 631, 251));
        label = new QLabel(telaNotificacoes);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 281, 41));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        btn_voltar = new QPushButton(telaNotificacoes);
        btn_voltar->setObjectName("btn_voltar");
        btn_voltar->setGeometry(QRect(522, 310, 121, 29));

        retranslateUi(telaNotificacoes);

        QMetaObject::connectSlotsByName(telaNotificacoes);
    } // setupUi

    void retranslateUi(QDialog *telaNotificacoes)
    {
        telaNotificacoes->setWindowTitle(QCoreApplication::translate("telaNotificacoes", "Notifica\303\247\303\265es", nullptr));
        label->setText(QCoreApplication::translate("telaNotificacoes", "Notifica\303\247\303\265es", nullptr));
        btn_voltar->setText(QCoreApplication::translate("telaNotificacoes", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaNotificacoes: public Ui_telaNotificacoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELANOTIFICACOES_H
