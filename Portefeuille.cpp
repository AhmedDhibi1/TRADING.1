#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include <algorithm>
#include"Portefeuille.h"
using namespace std;
Titre::Titre(string nact,double pact,int q)
{
    nomAction=nact;
    prixAction=pact;
    quantite=q;
}
string Titre::getNomAction()
{
    return nomAction;
}
double Titre::getPrixAction()
{
    return prixAction;
}
int Titre::getQuantiteAction()
{
    return quantite;
}
ostream& operator <<(ostream& flux,Titre& t)
{
    flux<<t.nomAction<<":"<<t.prixAction<<":"<<t.quantite<<endl;
    return flux;
}
bool operator ==(Titre t1,Titre t2)
{
    return((t1.nomAction==t2.nomAction)&&(t1.prixAction==t2.prixAction)&&(t1.quantite==t2.quantite));
}
Portefeuille::Portefeuille(double c,vector<Titre> T){
    capital=c;
    Titres=T;
}
Portefeuille::Portefeuille()
{

}
double Portefeuille::GetCapital() const
{
    return capital;
}

void Portefeuille::SetSolde(double newCapital)
{
    capital=newCapital;
}
ostream& operator <<(ostream& flux,Portefeuille& p)
{
    flux<<"Solde de trader : "<<p.capital<<" dollars"<<endl;
    flux<<"Ses titres"<<endl;
    for(auto i:p.Titres)
    {
        flux<<i<<endl;
    }
    return flux;
}
void Portefeuille::ajouterAction(Titre t)
{
    Titres.push_back(t);
}
void Portefeuille::retirerAction(Titre t)
{
    for(auto i:Titres)
    {
        if(i==t)
        {
             Titres.erase(remove(Titres.begin(),Titres.end(),t),Titres.end());
        }
    }
}

