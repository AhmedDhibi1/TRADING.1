#ifndef TRADERALEATOIRE_H_INCLUDED
#define TRADERALEATOIRE_H_INCLUDED
#include<iostream>
#include <cstring>
#include <cstdlib>
#include "Bourse.h"
#include "Portefeuille.h"
#include "Transaction.h"
#include "Trader.h"
using namespace std;
class TraderAleatoire :public Trader
{
    private:
        string nomTrader;
        double capital;
    public:
        TraderAleatoire(string nom,double c);
        Transaction choisirTransaction(const Bourse& bourse,Portefeuille& portefeuille);
};


#endif // TRADERALEATOIRE_H_INCLUDED
