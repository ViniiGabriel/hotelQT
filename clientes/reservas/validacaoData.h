#ifndef VALIDACAODATA_H
#define VALIDACAODATA_H

#include <QApplication>
#include <QLineEdit>
#include <QValidator>
#include <QDate>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

class validacaoData : public QValidator {
public:
    validacaoData(QObject *parent = nullptr) : QValidator(parent) {}

    QValidator::State validate(QString &input, int &pos) const override {
        Q_UNUSED(pos);

        if (input.isEmpty()) {
            return Intermediate;
        }

        // Valida usando uma expressão regular
        QRegularExpression regex("^\\d{2}/\\d{2}/\\d{4}$");
        QRegularExpressionMatch match = regex.match(input);
        if (!match.hasMatch()) {
            return Invalid;
        }

        // Valida usando QDate
        QDate date = QDate::fromString(input, "dd/MM/yyyy");
        if (!date.isValid()) {
            return Invalid;
        }

        return Acceptable;
    }
};


#endif // VALIDACAODATA_H
