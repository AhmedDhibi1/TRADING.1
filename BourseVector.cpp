#include "PrixJournalier.h"
#include<vector>
#include"Date.h"
#include"PersistancePrixJournalier.h"
#include<set>
#include<iostream>
#include<stdlib.h>
#include<cstring>
#include"BourseVector.h"
#include "Bourse.h"
BourseVector::BourseVector(Date da,vector<PrixJournalier> his)
{
    Date_Ajourdhui=da;
    historique=his;
}
set<string> BourseVector::getActionsDisponiblesParDate(Date& d)
{
    set<string> adpg;
    PrixJournalier pji,pjf;
    Date di,df;
    pji=historique[0];
    pjf=historique[historique.size()-1];
    di=pji.getDate();
    df=pjf.getDate();

    if(( Date_Ajourdhui<d)&&(d<di)&&(df<d)){
        cerr<<"date introuvable"<<endl;
    }
    else{
        for(auto j:historique){

            if(d==j.getDate()){

                adpg.insert(j.getNomAction());
             }

        }

    }

     return adpg;

}
vector<PrixJournalier> BourseVector::getPrixJournaliersParDate(Date& d)
{
    vector<PrixJournalier> pjpd;
    PrixJournalier pji,pjf;
    Date di,df;
    pji=historique[0];
    pjf=historique[historique.size()-1];
    di=pji.getDate();
    df=pjf.getDate();
    if(((Date_Ajourdhui<d))&&((d<di)||(df<d))){
        cerr<<"date introuvable"<<endl;

    }
    else
    {
        for(auto j:historique)
        {
            if(d==j.getDate())
            {
                pjpd.push_back(j);
            }
        }
    }
    return pjpd;
}
vector<PrixJournalier> BourseVector::getActionsDisponiblesAujourdhuiPourLeTrader(double s)const
{
    vector<PrixJournalier> tab;
    for(auto j:historique)
    {
        if((Date_Ajourdhui==j.getDate())&&(j.getPrix()<=s))
        {
            tab.push_back(j);
        }
    }
    return tab;

}


