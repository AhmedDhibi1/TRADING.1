#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>
#include <cstring>
#include <ctime>
#include "Date.h"
#include "PrixJournalier.h"
#include "PersistancePrixJournalier.h"
#include "Bourse.h"
#include "BourseVector.h"
#include "Portefeuille.h"
#include "Transaction.h"
using namespace std;

int main()
{
    Date date1(31,12,2010);
    Date date2(22,04,2023);
    PrixJournalier pj;
    PersistancePrixJournaliers ppj;
    vector<PrixJournalier> vpj;
    vpj=ppj.lirePrixJournaliersDUnFichier("C:\\Users\\USER\\Desktop\\MonProjet\\prices_simple.csv");
    BourseVector bv(date1,vpj);
    /*
    Titre t("A",12.33);
    vector<Titre> vt;
    vt.push_back(t);
    Portefeuille p(100,vt);
    cout<<p<<endl;
    */
    //cin>>pj;
    //cout<<pj;
    /*
    for(auto i:vpj)
    {
        cout<<i;
    }
    */
    //cout<< vpj[0];
    //cout<< vpj[851263];
    for (auto j : bv.getPrixJournaliersParDate(date1))
    {
        cout << j <<endl;
    }
    cout<<"----------------------------------------"<<endl;
    for(auto i : bv.getActionsDisponiblesParDate(date1))
    {
        cout<<i<<endl;
    }
    cout<<"----------------------------------------"<<endl;
    double s=30;
    for(auto i : bv.getActionsDisponiblesAujourdhuiPourLeTrader(s))
    {
        cout<<i<<endl;
    }
    return 0;
}
