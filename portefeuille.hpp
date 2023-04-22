#ifndef PORTEFEUILLE_HPP_INCLUDED
#define PORTEFEUILLE_HPP_INCLUDED
#include<iostream>
#include<vector>
using namespace std;
class portefeuille
{
    private:
        double solde;
        vector<string> action;
        vector<double> prixaction;
    public:
        portefeuille(double s,vector<string> a,vector<double> pa);
        double getsolde();
        vector<string> getaction();
        vector<double> getprixaction();

};


#endif // PORTEFEUILLE_HPP_INCLUDED
