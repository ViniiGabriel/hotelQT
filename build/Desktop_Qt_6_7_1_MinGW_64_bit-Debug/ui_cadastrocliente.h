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
    QWidget *layoutWidget;
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
    QLabel *label_5;
    QLineEdit *txt_cpf;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *txt_endereco;

    void setupUi(QDialog *cadastroCliente)
    {
        if (cadastroCliente->objectName().isEmpty())
            cadastroCliente->setObjectName("cadastroCliente");
        cadastroCliente->resize(428, 261);
        cadastroCliente->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
"QLabel{\n"
"	color: #3d5557;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border-radius: 4px;\n"
"	border: 1px solid #3d5557\n"
"}\n"
""));
        btn_cadastrar = new QPushButton(cadastroCliente);
        btn_cadastrar->setObjectName("btn_cadastrar");
        btn_cadastrar->setGeometry(QRect(140, 200, 151, 41));
        layoutWidget = new QWidget(cadastroCliente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 11, 401, 170));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        txt_nome = new QLineEdit(layoutWidget);
        txt_nome->setObjectName("txt_nome");

        horizontalLayout_4->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        txt_username = new QLineEdit(layoutWidget);
        txt_username->setObjectName("txt_username");

        horizontalLayout_3->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        txt_senha = new QLineEdit(layoutWidget);
        txt_senha->setObjectName("txt_senha");
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        txt_cpf = new QLineEdit(layoutWidget);
        txt_cpf->setObjectName("txt_cpf");
        txt_cpf->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(txt_cpf);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        txt_endereco = new QLineEdit(layoutWidget);
        txt_endereco->setObjectName("txt_endereco");

        horizontalLayout_5->addWidget(txt_endereco);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(cadastroCliente);

        QMetaObject::connectSlotsByName(cadastroCliente);
    } // setupUi

    void retranslateUi(QDialog *cadastroCliente)
    {
        cadastroCliente->setWindowTitle(QCoreApplication::translate("cadastroCliente", "Cadastro de Cliente", nullptr));
        btn_cadastrar->setText(QCoreApplication::translate("cadastroCliente", "Cadastrar", nullptr));
        label->setText(QCoreApplication::translate("cadastroCliente", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("cadastroCliente", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("cadastroCliente", "Senha:", nullptr));
        label_5->setText(QCoreApplication::translate("cadastroCliente", "CPF:", nullptr));
        txt_cpf->setText(QString());
        label_4->setText(QCoreApplication::translate("cadastroCliente", "Endere\303\247o:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroCliente: public Ui_cadastroCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROCLIENTE_H
