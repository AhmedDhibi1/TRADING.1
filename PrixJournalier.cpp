#include"PrixJournalier.h"
#include "date.h"
#include<string.h>
#include<iostream>
PrixJournalier::PrixJournalier(string s,double p,date da)
{
    nomAction=s;
    prix=p;
    d=da;
}
PrixJournalier::PrixJournalier()
{

}
string PrixJournalier::GetNomAction()
{
    return nomAction;
}
double PrixJournalier::GetPrix()
{
    return prix;
}
date PrixJournalier::GetDate()
{
    return d;
}
ostream& operator<<(ostream& flux, PrixJournalier &Pj)
{
    flux<<Pj.d<<":"<<Pj.nomAction<<":"<<Pj.prix;
    return flux;
}
istream& operator>>(istream& flux, PrixJournalier &pj)
{
    char tab[100];
    flux>>pj.d;
    flux.getline(tab,100,';');
    pj.nomAction=tab;
    flux.getline(tab,100,'\n');
    pj.prix=atof(tab);
    return flux;
}
