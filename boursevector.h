#ifndef BOURSEVECTOR_H_INCLUDED
#define BOURSEVECTOR_H_INCLUDED
#include"bourse.h"
#include<iostream>
#include<set>
#include<vector>
using namespace std;
class boursevector: public Bourse
{
    private:
         date Date_Ajourdhui;
         vector<PrixJournalier> historiques;
    public:
        boursevector(date d,vector<PrixJournalier> h);
        set<string> getActionsDisponiblesParDate(date& d);
        vector<PrixJournalier> getPrixJournaliersParDate(date& d);
};



#endif // BOURSEVECTOR_H_INCLUDED
