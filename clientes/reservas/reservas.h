#ifndef RESERVAS_H
#define RESERVAS_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

class Reservas{
private:
    int m_id;
    int DiaInicialReserva;
    int MesInicialReserva;
    int AnoInicialReserva;
    int DiaFinalReserva;
    int MesFinalReserva;
    int AnoFinalReserva;


public:
    Reservas(int id, int diaI, int mesI, int anoI, int diaF, int mesF, int anoF) : m_id(id), DiaInicialReserva(diaI),
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
            int DiaInicialExistente = query.value(1).toInt();
            int MesInicialExistente = query.value(2).toInt();
            int AnoInicialExistente = query.value(3).toInt();
            int DiaFinalExistente = query.value(4).toInt();
            int MesFinalExistente = query.value(5).toInt();
            int AnoFinalExistente = query.value(6).toInt();

            if(AnoInicialReserva >= AnoInicialExistente && AnoFinalReserva <= AnoFinalExistente){
            if(MesInicialReserva == MesInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente)
            {
                qDebug() << "P1";
                return 0;
            } else if (MesInicialReserva == MesFinalExistente && MesFinalReserva == MesFinalExistente && DiaInicialReserva > DiaFinalExistente)
            {
                qDebug() << "P2";
                return 0;
            } else if (MesInicialReserva < MesInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente)
            {
                qDebug() << "P3";
                return 0;
            } else if (MesInicialReserva == MesFinalExistente && MesFinalReserva > MesFinalExistente && DiaInicialReserva > DiaFinalExistente)
            {
                qDebug() << "P4";
                return 0;
            } else if (MesFinalReserva < MesInicialExistente)
            {
                qDebug() << "P5";
                return 0;
            } else if (MesInicialReserva > MesFinalExistente)
            {
                qDebug() << "P6";
                return 0;
            }
            }

            if(AnoInicialReserva < AnoInicialExistente && AnoFinalReserva == AnoInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente)
            {
                qDebug() << "P7";
                return 0;
            }

            if(AnoFinalReserva < AnoInicialExistente){
                qDebug() << "P8";
                return 0;
            }
            if(AnoInicialReserva == AnoFinalExistente && AnoFinalReserva > AnoFinalExistente && MesInicialReserva == MesFinalExistente && DiaInicialReserva > DiaFinalExistente)
            {
                qDebug() << "P9";
                return 0;
            }
            if (AnoInicialReserva > AnoFinalExistente)
            {
                qDebug() << "P10";
                return 0;
            }
            if(AnoInicialReserva == AnoFinalExistente && MesInicialReserva == MesFinalExistente && DiaInicialReserva > DiaFinalExistente)
            {
                qDebug() << "P11";
                return 0;
            }
            if(AnoFinalReserva == AnoInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente)
            {
                qDebug() << "P12";
                return 0;
            }
            if(AnoInicialReserva == AnoFinalExistente && MesInicialReserva > MesFinalExistente)
            {
                qDebug() << "P13";
                return 0;
            }
            if(AnoFinalReserva == AnoInicialExistente && MesFinalReserva < MesInicialExistente){
                qDebug() << "P14";
                return 0;
            }

        }
        return 1;
        }
    }

};

#endif
