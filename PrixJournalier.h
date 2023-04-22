#ifndef PRIXJOURNALIER_H_INCLUDED
#define PRIXJOURNALIER_H_INCLUDED
#include "date.h"
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;

class PrixJournalier
{
    private:
        string nomAction;
        double prix;
        date d;
    public:
        PrixJournalier(string s,double p,date da);
        PrixJournalier();
        string GetNomAction();
        double GetPrix();
        date GetDate();
        friend ostream& operator<<(ostream& flux, PrixJournalier &Pj);
        friend istream& operator>>(istream& flux, PrixJournalier &pj);


};

#endif // PRIXJOURNALIER_H_INCLUDED
