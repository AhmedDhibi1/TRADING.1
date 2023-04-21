#include<iostream>

#include"Transaction.hpp"
using namespace std;
Transaction::Transaction(){
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
    Transaction t;
    double montant;
    montant=t.getsolde()-prix;
    return montant;
}
double Transaction::vente(double prix)
{
    Transaction t;
    double montant;
    montant=t.getsolde()+prix;
    return montant;
}
