#ifndef TRADERABSTR_HPP_INCLUDED
#define TRADERABSTR_HPP_INCLUDED
#include"bourse.h"
#include"portefeuille.hpp"
#include"Transaction.hpp"
#include<iostream>
using namespace std;
class traderabstr{
    private:
        string nom;
        portefeuille prtf;

    public:
        traderabstr(string s,portefeuille p);
        string getnom();
        portefeuille getprtf();
        traderabstr();

        Transaction choisirtransaction(Bourse &b, portefeuille &p);

};


#endif // TRADERABSTR_HPP_INCLUDED
