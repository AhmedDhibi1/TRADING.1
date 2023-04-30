#include "PrixJournalier.h"
#include "Date.h"
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<sstream>
#include<cstdlib>
#include<string>
PrixJournalier::PrixJournalier(string s,double p,Date da)
{
    nomAction=s;
    prix=p;
    d=da;
}
PrixJournalier::PrixJournalier()
{

}
PrixJournalier::~PrixJournalier()
{

}
string PrixJournalier::getNomAction()const
{
    return (this->nomAction);
}
double PrixJournalier::getPrix()const
{
    return (this->prix);
}
Date PrixJournalier::getDate()const
{
    return (this->d);
}

ostream& operator<<(ostream& flux,  PrixJournalier &Pj)
{
    flux<<Pj.d<<":"<<Pj.nomAction<<":"<<Pj.prix<<endl;
    return flux;
}

istream& operator>>(istream& flux, PrixJournalier& pj)
{
    char tab[100];
    flux>>pj.d;
    flux.getline(tab,100,';');
    pj.nomAction=tab;
    flux.getline(tab,100,'\n');
    pj.prix=atof(tab);
    return flux;
}


