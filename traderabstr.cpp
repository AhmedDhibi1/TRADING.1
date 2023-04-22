#include"bourse.h"
#include"portefeuille.hpp"
#include"Transaction.hpp"
#include"traderabstr.hpp"
#include<iostream>
#include<vector>
#include"PrixJournalier.h"
#include"boursevector.h"
#include"date.h"
using namespace std;
traderabstr::traderabstr(string s,portefeuille p)
{
   nom=s;
   prtf=p;
}
string traderabstr::getnom()
{
    return nom;
}
portefeuille traderabstr::getprtf()
{
    return prtf;
}
Transaction traderabstr::choisirtransaction( Bourse &b, portefeuille &p)
{
   // double s=p.getsolde
    Transaction t(p.getsolde());
    int choix;
   // operation d'achat
    /*for(auto j:b.Action_Disponible_Au_jour_dhui_Pour_Le_Trader(p.getsolde()))
    {
        int i=0;
        while(p.getsolde()>=j.GetPrix())
        {
            t.achat(j.GetPrix());
            p.getaction().push_back(j.GetNomAction());
            p.getprixaction().push_back(j.GetPrix());
            b.Action_Disponible_Au_jour_dhui_Pour_Le_Trader(p.getsolde()).erase(i);
            i++;
        }

    }
    //operation de vente
    for(int i=0;i<=p.getprixaction().size();i++)
    {
        PrixJournalier pxj;
        if(p.getprixaction().size()!=0)
        {
            t.vente(p.getprixaction()[i]);
            pxj.GetPrix()=p.getprixaction()[i];
            pxj.GetNomAction()=p.getaction()[i];
            pxj.GetDate()=b.Date_Ajourdhui;
            p.getaction().erase(i);
            p.getprixaction().erase(i);
            p.getsolde()=t.getsolde();
            b.Action_Disponible_Au_jour_dhui_Pour_Le_Trader(p.getsolde()).push_back(pxj);

        }

    }*/
    while(1)
    {
        cerr<<"*******************************"<<endl;
        cerr<<"             menu              "<<endl;
        cerr<<"*******************************"<<endl;
        cerr<<"1-achat"<<endl;
        cerr<<"2-vente"<<endl;
        cerr<<"0-exit"<<endl;
        cin>>choix;
        switch(choix)
        {
             case 1 :
                 {
                     /*vector<PrixJournalier> j;
                     j=b.Action_Disponible_Au_jour_dhui_Pour_Le_Trader();
                     int i=0;*/
                     string nact;
                     double s;
                     cerr<<"entrer le nom d'action a achetee"<<endl;
                     cin>>nact;
                     cerr<<"entrer le prix d'action a achetee"<<endl;
                     cin>>s;
                     vector<PrixJournalier> h;

                     date d;
                     d=b.getdate_aujourduit();
                     boursevector b(d,h);
                     for(auto j:b.Action_Disponible_Au_jour_dhui_Pour_Le_Trader(p.getsolde()))
                     {
                         if((p.getsolde()>=j.GetPrix())&&(j.GetNomAction()==nact)&&(j.GetPrix()==s))
                            {
                                t.achat(j.GetPrix());
                                p.getaction().push_back(j.GetNomAction());
                                p.getprixaction().push_back(j.GetPrix());
                                p.getsolde()=t.getsolde();
                               // b.Action_Disponible_Au_jour_dhui_Pour_Le_Trader(p.getsolde()).erase(j);
                                b.getActionsDisponiblesParDate(d).clear(j.GetNomAction());
                            }
                        else
                            break;
                     }
                     break;

                 }
             case 2:
                {
                    string nact;
                    double s;
                    cerr<<"entrer le nom d'action a achetee"<<endl;
                    cin>>nact;
                    cerr<<"entrer le prix d'action a achetee"<<endl;
                    cin>>s;
                    PrixJournalier pxj;
                    vector<PrixJournalier> h;
                    //Bourse b;
                    date d;
                    d=b.getdate_aujourduit();
                    boursevector b(d,h);
                    for(int i=0;i<=p.getprixaction().size();i++)
                    {
                        if(p.getprixaction().size()!=0)
                        {
                           if((p.getaction()[i]==nact)&&(p.getprixaction()[i]==s))
                           {
                               t.vente(p.getprixaction()[i]);
                               pxj.GetPrix()=p.getprixaction()[i];
                                pxj.GetNomAction()=p.getaction()[i];
                                pxj.GetDate()=b.getdate_aujourduit();
                                p.getaction().erase(i);
                                p.getprixaction().erase(i);
                                p.getsolde()=t.getsolde();
                               // b.Action_Disponible_Au_jour_dhui_Pour_Le_Trader(p.getsolde()).push_back(pxj);
                               b.getActionsDisponiblesParDate(d).insert(pxj.GetNomAction())
                           }
                        }
                        else
                            cerr<<"Erreur!!!... Votre portefeuille set vide"<<endl;

                    }
                    break;
                }
             case 3:
                  {
                    exit(0);
                  }
             default:
                cerr<<"saisir un choix entre 1 et 2"<<endl;

        }
    }
    return t;

}
