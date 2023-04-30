#ifndef TRANSACTION_H_INCLUDED
#define TRANSACTION_H_INCLUDED
#include<iostream>
#include"Bourse.h"
#include "Portefeuille.h"
#include <vector>
#include <set>
using namespace std;
enum class typeTransaction{achat,vente,rien};
class Transaction{
    private:
        string nomAction;
        double prixAction;
        int Quantite;
        typeTransaction typ;
    public:
        Transaction(string nact,double pact,int q,typeTransaction t);
        Transaction();
        int GetQuantite();
        double GetPrixAction();
        double Acheter(Portefeuille& p,const Bourse& b,string actionAchete,double prixActionAchete,int quantity);
        double Vendre(Portefeuille& p,const Bourse& b,string actionVendre,double prixActionVendre,int quantity);
};
#endif // TRANSACTION_H_INCLUDED
