#ifndef PORTEFEUILLE_H_INCLUDED
#define PORTEFEUILLE_H_INCLUDED
#include <iostream>
#include <cstring>
#include <vector>
#include "Bourse.h"
using namespace std;
class Titre
{
    private:
        string nomAction;
        double prixAction;
        int quantite;
    public:
        Titre(string nact,double pact,int q);
        string getNomAction();
        double getPrixAction();
        int getQuantiteAction();
        friend ostream& operator <<(ostream& flux,Titre& t);
        friend bool operator ==(Titre t1,Titre t2);
};
class Portefeuille
{
    private:
        double capital;
        vector<Titre> Titres;
    public:
        Portefeuille(double c,vector<Titre> T);
        Portefeuille();
        double GetCapital()const;
        friend ostream& operator <<(ostream& flux,Portefeuille& p);
        void SetSolde(double newSolde);
        void ajouterAction(Titre t);
        void retirerAction(Titre t);
};
#endif // PORTEFEUILLE_H_INCLUDED
