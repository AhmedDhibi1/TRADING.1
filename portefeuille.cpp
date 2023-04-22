#include<iostream>
#include<vector>
#include"portefeuille.hpp"
using namespace std;
portefeuille::portefeuille(double s,vector<string> a,vector<double> pa){
    solde=s;
    action=a;
    prixaction=pa;
}
double portefeuille::getsolde()
{
    return solde;
}
vector<string> portefeuille::getaction()
{
    return action;
}
vector<double> portefeuille::getprixaction()
{
    return prixaction;
}
