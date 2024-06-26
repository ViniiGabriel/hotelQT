/********************************************************************************
** Form generated from reading UI file 'cadastrocliente.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROCLIENTE_H
#define UI_CADASTROCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroCliente
{
public:
    QPushButton *btn_cadastrar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *txt_senha;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *txt_endereco;

    void setupUi(QDialog *cadastroCliente)
    {
        if (cadastroCliente->objectName().isEmpty())
            cadastroCliente->setObjectName("cadastroCliente");
        cadastroCliente->resize(437, 207);
        btn_cadastrar = new QPushButton(cadastroCliente);
        btn_cadastrar->setObjectName("btn_cadastrar");
        btn_cadastrar->setGeometry(QRect(140, 160, 151, 41));
        widget = new QWidget(cadastroCliente);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 411, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName("txt_nome");

        horizontalLayout_4->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        txt_username = new QLineEdit(widget);
        txt_username->setObjectName("txt_username");

        horizontalLayout_3->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        txt_senha = new QLineEdit(widget);
        txt_senha->setObjectName("txt_senha");
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        txt_endereco = new QLineEdit(widget);
        txt_endereco->setObjectName("txt_endereco");

        horizontalLayout->addWidget(txt_endereco);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(cadastroCliente);

        QMetaObject::connectSlotsByName(cadastroCliente);
    } // setupUi

    void retranslateUi(QDialog *cadastroCliente)
    {
        cadastroCliente->setWindowTitle(QCoreApplication::translate("cadastroCliente", "Dialog", nullptr));
        btn_cadastrar->setText(QCoreApplication::translate("cadastroCliente", "Cadastrar", nullptr));
        label->setText(QCoreApplication::translate("cadastroCliente", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("cadastroCliente", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("cadastroCliente", "Senha:", nullptr));
        label_4->setText(QCoreApplication::translate("cadastroCliente", "Endere\303\247o:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroCliente: public Ui_cadastroCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROCLIENTE_H
