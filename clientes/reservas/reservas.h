#ifndef RESERVAS_H
#define RESERVAS_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

class Reservas{
private:
    int m_id;
    QString DiaInicialReserva;
    QString MesInicialReserva;
    QString AnoInicialReserva;
    QString DiaFinalReserva;
    QString MesFinalReserva;
    QString AnoFinalReserva;


public:
    Reservas(int id, QString diaI, QString mesI, QString anoI, QString diaF, QString mesF, QString anoF) : m_id(id), DiaInicialReserva(diaI),
        MesInicialReserva(mesI), AnoInicialReserva(anoI), DiaFinalReserva(diaF), MesFinalReserva(mesF), AnoFinalReserva(anoF) {}


    int verifConflito()
    {
        QSqlQuery query;
        query.prepare("select * from tb_reservas where idQuarto = :id");
        query.bindValue(":id", QString::number(m_id));
        if(!query.exec())
        {
            return 2;
        } else {
        while(query.next())
        {
            QString DiaInicialExistente = query.value(1).toString();
            QString MesInicialExistente = query.value(2).toString();
            QString AnoInicialExistente = query.value(3).toString();
            QString DiaFinalExistente = query.value(4).toString();
            QString MesFinalExistente = query.value(5).toString();
            QString AnoFinalExistente = query.value(6).toString();
            /*
            if (AnoInicialReserva <= AnoInicialExistente && AnoFinalReserva >= AnoFinalExistente &&
                MesInicialReserva <= MesInicialExistente && MesFinalReserva >= MesFinalExistente &&
                DiaInicialReserva <= DiaInicialExistente && DiaFinalReserva >= DiaFinalExistente) {
                qDebug() << "P1";
                return 1;
            }

            if ((AnoInicialReserva > AnoInicialExistente ||
                 (AnoInicialReserva == AnoInicialExistente && MesInicialReserva > MesInicialExistente) ||
                 (AnoInicialReserva == AnoInicialExistente && MesInicialReserva == MesInicialExistente && DiaInicialReserva > DiaInicialExistente)) &&
                (AnoFinalReserva > AnoFinalExistente ||
                 (AnoFinalReserva == AnoFinalExistente && MesFinalReserva > MesFinalExistente) ||
                 (AnoFinalReserva == AnoFinalExistente && MesFinalReserva == MesFinalExistente && DiaFinalReserva >= DiaFinalExistente))) {
                qDebug() << "P2";
                return 1;
            }

            if ((AnoInicialReserva < AnoInicialExistente ||
                 (AnoInicialReserva == AnoInicialExistente && MesInicialReserva < MesInicialExistente) ||
                 (AnoInicialReserva == AnoInicialExistente && MesInicialReserva == MesInicialExistente && DiaInicialReserva <= DiaInicialExistente)) &&
                (AnoFinalReserva < AnoFinalExistente ||
                 (AnoFinalReserva == AnoFinalExistente && MesFinalReserva < MesFinalExistente) ||
                 (AnoFinalReserva == AnoFinalExistente && MesFinalReserva == MesFinalExistente && DiaFinalReserva <= DiaFinalExistente))) {

                qDebug() << "P3";
                return 1;
            }

            if ((AnoInicialReserva >= AnoInicialExistente && AnoInicialReserva <= AnoFinalExistente) &&
                (AnoFinalReserva >= AnoInicialExistente && AnoFinalReserva <= AnoFinalExistente) &&
                (MesInicialReserva >= MesInicialExistente && MesInicialReserva <= MesFinalExistente) &&
                (MesFinalReserva >= MesInicialExistente && MesFinalReserva <= MesFinalExistente) &&
                (DiaInicialReserva >= DiaInicialExistente && DiaInicialReserva <= DiaFinalExistente) &&
                (DiaFinalReserva >= DiaInicialExistente && DiaFinalReserva <= DiaFinalExistente)) {
                qDebug() << "P4";
                return 1;
            }

            if ((AnoInicialExistente >= AnoInicialReserva && AnoInicialExistente <= AnoFinalReserva) &&
                (AnoFinalExistente >= AnoInicialReserva && AnoFinalExistente <= AnoFinalReserva) &&
                (MesInicialExistente >= MesInicialReserva && MesInicialExistente <= MesFinalReserva) &&
                (MesFinalExistente >= MesInicialReserva && MesFinalExistente <= MesFinalReserva) &&
                (DiaInicialExistente >= DiaInicialReserva && DiaInicialExistente <= DiaFinalReserva) &&
                (DiaFinalExistente >= DiaInicialReserva && DiaFinalExistente <= DiaFinalReserva)) {
                qDebug() << "P5";
                return 1;
            }

            if ((AnoInicialExistente <= AnoInicialReserva && AnoFinalExistente >= AnoFinalReserva) &&
                (MesInicialExistente <= MesInicialReserva && MesFinalExistente >= MesFinalReserva) &&
                (DiaInicialExistente <= DiaInicialReserva && DiaFinalExistente >= DiaFinalReserva)) {
                qDebug() << "P6";
                return 1;
            }

            if (!(AnoFinalReserva < AnoInicialExistente || AnoInicialReserva > AnoFinalExistente ||
                  (AnoFinalReserva == AnoInicialExistente && MesFinalReserva < MesInicialExistente) ||
                  (AnoInicialReserva == AnoFinalExistente && MesInicialReserva > MesFinalExistente) ||
                  (AnoFinalReserva == AnoInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente) ||
                  (AnoInicialReserva == AnoFinalExistente && MesInicialReserva == MesFinalExistente && DiaInicialReserva > DiaFinalExistente))) {
                qDebug() << "P7";
                return 1;
            }
            */
            if(MesInicialReserva <= MesInicialExistente && MesFinalReserva >= MesFinalExistente &&
                DiaFinalReserva <= DiaFinalExistente && DiaInicialReserva >= DiaInicialExistente)
            {
                qDebug() << "P1";
                return 1;
            }
        }
        return 0;
        }
    }

};

#endif
