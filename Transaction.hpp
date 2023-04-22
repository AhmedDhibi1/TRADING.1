#ifndef TRANSACTION_HPP_INCLUDED
#define TRANSACTION_HPP_INCLUDED
#include<iostream>


using namespace std;
class Transaction{
    private:
        double solde;
        //int quantite;
    public:
        Transaction(double s);
        double getsolde();
        //int getquantite();
        double achat(double prix);
        double vente(double prix);


};


#endif // TRANSACTION_HPP_INCLUDED
