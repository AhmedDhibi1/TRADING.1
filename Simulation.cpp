#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstring>
#include "Simulation.h"
#include "Portefeuille.h"
#include "Date.h"
#include "PrixJournalier.h"
#include "Transaction.h"
void Simualation::executer(Bourse& bourse, Trader& trader, Date dateDebut, Date dateFin, double solde)
{
    Portefeuille p;
    typeTransaction tt;
    for(Date i=dateDebut;i<dateFin;i.incrementerdate())
    {
        vector<PrixJournalier> actionsDisponibles=bourse.getActionsDisponiblesAujourdhuiPourLeTrader(p.GetCapital());
        if(tt==typeTransaction::achat)
        {
            if(solde<=trader.getSolde())
            {
                Transaction t=trader.choisirTransaction(bourse,p);

            }
        }
        else
        {

        }

    }
}
