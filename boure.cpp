#include "PrixJournalier.h"
#include<vector>
#include"date.h"
#include "Bourse.h"
#include"PersistancePrixJournaliers.h"
#include<set>
#include<iostream>
#include<stdlib.h>
#include<cstring>
/*Bourse::Bourse(date d,vector<PrixJournalier> h){
    Date_Ajourdhui=d;
    historiques=h;
}*/

date Bourse::getdate_aujourduit(){
    return Date_Ajourdhui;
}
set<string> Bourse::Action_Disponible_Au_jour_dhui_Pour_Le_Trader(double s)
{
    set<string> tab;
    for(auto j:historiques){
        if((Date_Ajourdhui==j.GetDate())&&(j.GetPrix()<=s)){
            tab.insert(j.GetNomAction());
        }
    }
    return tab;
}
