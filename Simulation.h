#ifndef SIMULATION_H_INCLUDED
#define SIMULATION_H_INCLUDED
#include <iostream>
#include "Date.h"
#include "Bourse.h"
#include "Trader.h"
#include "Transaction.h"
using namespace std;
class Simualation
{
    public:
        void executer(Bourse& bourse, Trader& trader, Date dateDebut, Date dateFin, double solde);
};


#endif // SIMULATION_H_INCLUDED
