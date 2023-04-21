#ifndef PERSISTANCEPRIXJOURNALIERS_H_INCLUDED
#define PERSISTANCEPRIXJOURNALIERS_H_INCLUDED
#include<vector>
#include<iostream>
#include<fstream>
#include "PrixJournalier.h"
using namespace std;

class PersistancePrixJournaliers
{
    public:
        static vector<PrixJournalier> lirePrixJournaliersDUnFichier(string path="C:\\Users\\user\\OneDrive\\Bureau\\prixjournalier\\prices_simple.csv")
        {
            vector<PrixJournalier> historique;
            ifstream f("C:\\Users\\user\\OneDrive\\Bureau\\prixjournalier\\prices_simple.csv");
            int nbLignes= 0;
            string entete;
            if(f.is_open())
            {
                f>>entete;
                while(!f.eof()){
                    PrixJournalier pj;
                    f>>(pj);
                    historique.push_back(pj);
                    nbLignes++;
            }
        }
            return historique;
        }
};


#endif // PERSISTANCEPRIXJOURNALIERS_H_INCLUDED
