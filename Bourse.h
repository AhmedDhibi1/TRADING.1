#ifndef BOURSE_H_INCLUDED
#define BOURSE_H_INCLUDED
#include "PrixJournalier.h"
#include "PersistancePrixJournalier.h"
#include<vector>
#include"Date.h"
#include<set>
class Bourse
{
    protected:
        Date Date_Ajourdhui;
    public:
        Date getDateAujourdhui() const;
        virtual set<string> getActionsDisponiblesParDate(Date& d)=0;
        virtual vector<PrixJournalier> getPrixJournaliersParDate(Date& d)=0;
        virtual vector<PrixJournalier> getActionsDisponiblesAujourdhuiPourLeTrader(double s) const=0;
};
#endif // BOURSE_H_INCLUDED
