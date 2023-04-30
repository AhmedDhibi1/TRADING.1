#include "TraderAleatoire.h"
#include "Portefeuille.h"
#include "Transaction.h"
#include "Trader.h"
#include "Bourse.h"
#include <cstring>
#include <cstdlib>
TraderAleatoire::TraderAleatoire(string nom,double c):Trader(nom,c)
{

}
Transaction TraderAleatoire::choisirTransaction(const Bourse& bourse,Portefeuille& portefeuille)
{
    string nomact;
    double prixact=0;
    int q=0;
    Titre titre(nomact,prixact,q);
    Transaction t;
    typeTransaction type=typeTransaction::achat;
    if(type==typeTransaction::achat && getSolde()>=prixact*q)
    {
        Transaction t_achat(nomact,prixact,q,typeTransaction::achat);
        t.Acheter(portefeuille,bourse,nomact,prixact,q);
        return t_achat;
    }
    else if(type==typeTransaction::vente && titre.getQuantiteAction()>=q)
    {
        Transaction t_vente(nomact,prixact,q,typeTransaction::vente);
        t.Vendre(portefeuille,bourse,nomact,prixact,q);
        return t_vente;
    }
    else if(type==typeTransaction::rien)
    {
        exit(0);
    }
    else
        return t;
}
