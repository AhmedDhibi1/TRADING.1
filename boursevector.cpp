#include "PrixJournalier.h"
#include<vector>
#include"date.h"
#include"bourse.h"
#include"PersistancePrixJournaliers.h"
#include<set>
#include<iostream>
#include<stdlib.h>
#include<cstring>
#include"boursevector.h"
boursevector::boursevector(date d,vector<PrixJournalier> h){
    Date_Ajourdhui=d;
    historiques=h;
}
vector<PrixJournalier> boursevector::getPrixJournaliersParDate(date& d)
{
    vector<PrixJournalier> tab;
    //vector<PrixJournalier>  historiques;



    date i,f;
    i=historiques[0].GetDate();
    f=historiques[historiques.size()-1].GetDate();
    //boursevector b(c,historiques);
    //a=b.getdate_aujourduit();


    if(((Date_Ajourdhui<d))&&((d<i)||(f<d))){
        cerr<<"date introuvable"<<endl;

    }
    else{
        for(auto j:historiques){
            if(d==j.GetDate()){
                tab.push_back(j);
            }
        }
    return tab;


    }
}
set<string> boursevector::getActionsDisponiblesParDate(date& d)
{
    set<string> tab;
    date it,f;
    it=historiques[0].GetDate();
    f=historiques[historiques.size()-1].GetDate();



    if(( Date_Ajourdhui<d)&&(d<it)&&(f<d)){
        cerr<<"date introuvable"<<endl;
    }
    else{
        for(auto j:historiques){

            if(d==j.GetDate()){

                tab.insert(j.GetNomAction());
             }

        }

    }

     return tab;



}
