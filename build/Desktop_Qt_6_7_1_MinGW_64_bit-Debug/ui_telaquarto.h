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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaQuarto
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *foto_pixmap;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *txt_titulo;
    QLabel *txt_decricao;

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
        foto_pixmap = new QLabel(telaQuarto);
        foto_pixmap->setObjectName("foto_pixmap");
        foto_pixmap->setGeometry(QRect(10, 20, 141, 141));
        foto_pixmap->setScaledContents(true);
        layoutWidget = new QWidget(telaQuarto);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 270, 451, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        widget = new QWidget(telaQuarto);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(161, 11, 301, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txt_titulo = new QLabel(widget);
        txt_titulo->setObjectName("txt_titulo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txt_titulo->sizePolicy().hasHeightForWidth());
        txt_titulo->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(txt_titulo);

        txt_decricao = new QLabel(widget);
        txt_decricao->setObjectName("txt_decricao");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txt_decricao->sizePolicy().hasHeightForWidth());
        txt_decricao->setSizePolicy(sizePolicy1);
        txt_decricao->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(txt_decricao);


        retranslateUi(telaQuarto);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telaQuarto, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telaQuarto, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telaQuarto);
    } // setupUi

    void retranslateUi(QDialog *telaQuarto)
    {
        telaQuarto->setWindowTitle(QCoreApplication::translate("telaQuarto", "Dialog", nullptr));
        foto_pixmap->setText(QCoreApplication::translate("telaQuarto", "foto", nullptr));
        label_3->setText(QCoreApplication::translate("telaQuarto", "Dias de estadia:", nullptr));
        label_4->setText(QCoreApplication::translate("telaQuarto", "at\303\251", nullptr));
        pushButton->setText(QCoreApplication::translate("telaQuarto", "Reservar", nullptr));
        txt_titulo->setText(QCoreApplication::translate("telaQuarto", "Tipo quarto", nullptr));
        txt_decricao->setText(QCoreApplication::translate("telaQuarto", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaQuarto: public Ui_telaQuarto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAQUARTO_H
