#ifndef PRIXJOURNALIER_H_INCLUDED
#define PRIXJOURNALIER_H_INCLUDED
#include "Date.h"
#include<iostream>
#include<cstring>
using namespace std;

class PrixJournalier
{
    private:
        string nomAction;
        double prix;
        Date d;
    public:
        PrixJournalier(string s,double p,Date da);
        PrixJournalier();
        ~PrixJournalier();
        string getNomAction()const;
        double getPrix()const;
        Date getDate()const;
        friend ostream& operator<<(ostream& flux, PrixJournalier& Pj);
        friend istream& operator>>(istream& flux, PrixJournalier& pj);


};



#endif // PRIXJOURNALIER_H_INCLUDED
