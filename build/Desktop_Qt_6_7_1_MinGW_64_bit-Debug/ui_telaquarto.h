/********************************************************************************
** Form generated from reading UI file 'telaquarto.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAQUARTO_H
#define UI_TELAQUARTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaQuarto
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *telaQuarto)
    {
        if (telaQuarto->objectName().isEmpty())
            telaQuarto->setObjectName("telaQuarto");
        telaQuarto->resize(475, 378);
        buttonBox = new QDialogButtonBox(telaQuarto);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(130, 340, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(telaQuarto);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 49, 16));
        widget = new QWidget(telaQuarto);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 10, 301, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        widget1 = new QWidget(telaQuarto);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 270, 451, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);


        retranslateUi(telaQuarto);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telaQuarto, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telaQuarto, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telaQuarto);
    } // setupUi

    void retranslateUi(QDialog *telaQuarto)
    {
        telaQuarto->setWindowTitle(QCoreApplication::translate("telaQuarto", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telaQuarto", "foto", nullptr));
        label_2->setText(QCoreApplication::translate("telaQuarto", "Tipo quarto", nullptr));
        label_3->setText(QCoreApplication::translate("telaQuarto", "Dias de estadia:", nullptr));
        label_4->setText(QCoreApplication::translate("telaQuarto", "at\303\251", nullptr));
        pushButton->setText(QCoreApplication::translate("telaQuarto", "Reservar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaQuarto: public Ui_telaQuarto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAQUARTO_H
