#ifndef BOURSEVECTOR_H_INCLUDED
#define BOURSEVECTOR_H_INCLUDED
#include"Bourse.h"
#include "Date.h"
#include "PrixJournalier.h"
#include<iostream>
#include <vector>
#include <cstring>
#include <set>
using namespace std;
class BourseVector: public Bourse
{
    private:
        Date Date_Ajourdhui;
        vector<PrixJournalier> historique;
    public:
        BourseVector(Date da,vector<PrixJournalier> his);
        set<string> getActionsDisponiblesParDate(Date& d);
        vector<PrixJournalier> getPrixJournaliersParDate(Date& d);
        vector<PrixJournalier> getActionsDisponiblesAujourdhuiPourLeTrader(double s) const;
};
#endif // BOURSEVECTOR_H_INCLUDED
