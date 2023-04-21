#include <iostream>
#include"date.h"
#include"PersistancePrixJournaliers.h"
#include"PrixJournalier.h"
#include"test.h"
#include"boursevector.h"
#include"bourse.h"
#include<vector>
using namespace std;

int main()
{
    date date(24,11,2014);
    PrixJournalier pj;
    PersistancePrixJournaliers ppj;
    vector<PrixJournalier> vpj;


    vpj=ppj.lirePrixJournaliersDUnFichier("C:\\Users\\user\\OneDrive\\Bureau\\prixjournalier\\prices_simple.csv");
    boursevector bv(date,vpj);
    //cin>>pj;
    //cout<<pj;

    /*for(int i=0;i<static_cast<int>(vpj.size());i++)
    {
        cout<<vpj[i];
    }*/
    bv.getPrixJournaliersParDate(date);
    for(auto j:bv.getPrixJournaliersParDate(date))
    {
        cout<<j<<'\n'<<endl;
    }

    /*
    b.getActionsDisponiblesParDate(date);
    */
    //set<string> s;
    /*
    s=b.getActionsDisponiblesParDate(date);
    for(int i=0;i<static_cast<int>(s.size());i++)
    {
        cout<< s[i];
    }
    */
    /*s=bv.getActionsDisponiblesParDate(&date);
    for(int i=0;i<static_cast<int>(s.size());i++)
    {
        cout<< s[i];
    }

    b.getPrixJournaliersParDate(date);
    */
   return 0;
}
