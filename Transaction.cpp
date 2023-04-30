#include<iostream>
#include"Transaction.h"
#include"Bourse.h"
#include <vector>
#include <set>
#include <cstring>
#include <algorithm>
using namespace std;
Transaction::Transaction(string nact,double pact,int q,typeTransaction t)
{
    nomAction=nact;
    prixAction=pact;
    Quantite=q;
    typ=t;
}
Transaction::Transaction()
{

}
int Transaction::GetQuantite()
{
    return Quantite;
}
double Transaction::GetPrixAction()
{
    return prixAction;
}
double Transaction::Acheter(Portefeuille& p,const Bourse& b,string actionAchete,double prixActionAchete,int quantity)
{
    vector<PrixJournalier> actionsdisponibles=b.getActionsDisponiblesAujourdhuiPourLeTrader(p.GetCapital());
    Titre t(actionAchete,prixActionAchete,quantity);
    for(auto i:actionsdisponibles)
    {
        if(i.getNomAction()==actionAchete)
        {
           p.ajouterAction(t);
           double s=p.GetCapital()-prixActionAchete*quantity;
           p.SetSolde(s);
        }
    }
    return p.GetCapital();
}
double Transaction::Vendre(Portefeuille& p,const Bourse& b,string actionVendre,double prixActionVendre,int quantity)
{

    vector<PrixJournalier> actionsdisponibles=b.getActionsDisponiblesAujourdhuiPourLeTrader(p.GetCapital());
    Titre t(actionVendre,prixActionVendre,quantity);
    for(auto i:actionsdisponibles)
    {
        if(i.getNomAction()==actionVendre)
        {
           p.retirerAction(t);
           double s=p.GetCapital()+prixActionVendre*quantity;
           p.SetSolde(s);
        }
    }
    return p.GetCapital();
}
