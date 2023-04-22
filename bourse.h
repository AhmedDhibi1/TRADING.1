#ifndef BOURSE_H_INCLUDED
#define BOURSE_H_INCLUDED
#include "PrixJournalier.h"
#include<vector>
#include"date.h"
#include<set>
class Bourse
{
    protected:
        date Date_Ajourdhui;
        vector<PrixJournalier> historiques;

    public:
        //Bourse(date d,vector<PrixJournalier> h);
        date getdate_aujourduit();
        virtual set<string> getActionsDisponiblesParDate(date& d)=0;
        virtual vector<PrixJournalier> getPrixJournaliersParDate(date& d)=0;
        vector<PrixJournalier> Action_Disponible_Au_jour_dhui_Pour_Le_Trader(double s);
};



#endif // BOURSE_H_INCLUDED*/
