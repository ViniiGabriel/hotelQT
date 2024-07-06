/********************************************************************************
** Form generated from reading UI file 'telalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALOGIN_H
#define UI_TELALOGIN_H

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

class Ui_telaLogin
{
public:
    QLabel *label_3;
    QPushButton *btn_cadastro;
    QLabel *label_infoinvalida;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_senha;
    QPushButton *btn_login;

    void setupUi(QDialog *telaLogin)
    {
        if (telaLogin->objectName().isEmpty())
            telaLogin->setObjectName("telaLogin");
        telaLogin->resize(473, 251);
        telaLogin->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
"	font-weight:bold;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border-radius: 4px;\n"
"	border: 1px solid #3d5557\n"
"}\n"
""));
        label_3 = new QLabel(telaLogin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 200, 191, 20));
        btn_cadastro = new QPushButton(telaLogin);
        btn_cadastro->setObjectName("btn_cadastro");
        btn_cadastro->setGeometry(QRect(100, 220, 281, 29));
        label_infoinvalida = new QLabel(telaLogin);
        label_infoinvalida->setObjectName("label_infoinvalida");
        label_infoinvalida->setGeometry(QRect(140, 170, 201, 21));
        layoutWidget = new QWidget(telaLogin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 441, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txt_username = new QLineEdit(layoutWidget);
        txt_username->setObjectName("txt_username");

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        txt_senha = new QLineEdit(layoutWidget);
        txt_senha->setObjectName("txt_senha");
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        btn_login = new QPushButton(layoutWidget);
        btn_login->setObjectName("btn_login");

        verticalLayout_2->addWidget(btn_login);


        retranslateUi(telaLogin);

        QMetaObject::connectSlotsByName(telaLogin);
    } // setupUi

    void retranslateUi(QDialog *telaLogin)
    {
        telaLogin->setWindowTitle(QCoreApplication::translate("telaLogin", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("telaLogin", "N\303\243o \303\251 cliente? Cadastre-se", nullptr));
        btn_cadastro->setText(QCoreApplication::translate("telaLogin", "Cadastro", nullptr));
        label_infoinvalida->setText(QCoreApplication::translate("telaLogin", "Username ou senha inv\303\241lidos", nullptr));
        label->setText(QCoreApplication::translate("telaLogin", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("telaLogin", "Senha:", nullptr));
        btn_login->setText(QCoreApplication::translate("telaLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaLogin: public Ui_telaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGIN_H
