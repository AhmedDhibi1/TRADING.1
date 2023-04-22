#include<iostream>

#include"Transaction.hpp"
using namespace std;
Transaction::Transaction(double s){
    solde=s;
}
double Transaction::getsolde(){
    return solde;
}
/*int Transaction::getquantite()
{
    return quantite;
}*/
double Transaction::achat(double prix)
{
    Transaction t(solde);
    double montant;
    montant=t.getsolde()-prix;
    return montant;
}
double Transaction::vente(double prix)
{
    Transaction t(solde);
    double montant;
    montant=t.getsolde()+prix;
    return montant;
}
