#include "Trader.h"
#include "Portefeuille.h"
#include "Transaction.h"
#include <cstring>
Trader::Trader(string name,double s)
{
    nomTrader=name;
    solde=s;
}
string Trader::getNomTrader()const
{
    return nomTrader;
}
double Trader::getSolde()const
{
    return solde;
}
