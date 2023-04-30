#ifndef TRADER_H_INCLUDED
#define TRADER_H_INCLUDED
#include <iostream>
#include <cstring>
#include "Bourse.h"
#include "Portefeuille.h"
#include "Transaction.h"
using namespace std;
class Trader
{
    protected:
        string nomTrader;
        double solde;
    public:
        Trader(string name,double s);
        string getNomTrader()const;
        double getSolde()const;
        virtual Transaction choisirTransaction(const Bourse& bourse,Portefeuille& portefeuille)=0;
};

#endif // TRADER_H_INCLUDED
