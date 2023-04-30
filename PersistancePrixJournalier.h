#ifndef PERSISTANCEPRIXJOURNALIER_H_INCLUDED
#define PERSISTANCEPRIXJOURNALIER_H_INCLUDED
#include<vector>
#include<iostream>
#include<fstream>
#include "PrixJournalier.h"
using namespace std;
class PersistancePrixJournaliers
{
    public:
        static vector<PrixJournalier> lirePrixJournaliersDUnFichier(string path)
        {
            vector<PrixJournalier> historique;
            ifstream f(path.c_str());
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
#endif // PERSISTANCEPRIXJOURNALIER_H_INCLUDED
