#include <iostream>
#include"trading.h"
using namespace std;
int date::getjour()
{
    return jour;
}
int date::getmois()
{
    return mois;
}
int date::getannee()
{
    return annee;
}
date::date(int j ,int m ,int a)
{
    jour=j;
    mois=m;
    annee=a;
}
bool date::est_bissextile(int A)
{
    if(A%4==0)
        return true;
    else
        return false;
}
 int date::est_findemois(int M,int y)
 {
     if(M==1|| M==3 || M==5 || M==7 || M==8 || M==10 || M== 12)
        return 31;
     else if(M==4|| M==6 || M==9 || M==11 )
        return 30;
     else if((M==2 )&&(est_bissextile(y)==true))
        return 29;
     else if((M==2 )&&(est_bissextile(y)==false))
        return 28;
 }
 void date::incrementerdate()
 {
     while((mois>0)&&(mois<=12))
     {
        if((est_findemois(mois,annee)==30)&&(jour==30))
        {
            jour=1;
            mois++;
        }
        else if((est_findemois(mois,annee)==31)&&(jour==31))
        {
            if(mois==12)
            {
                jour=1;
                mois=1;
                annee++;
            }
            else
            {
                jour=1;
                mois++;
            }
        }
        else if((est_findemois(mois,annee)==29)&&(jour==29))
        {
            jour=1;
            mois++;
        }
        else if((est_findemois(mois,annee)==28)&&(jour==28))
        {
            jour=1;
            mois++;
        }
        else if((mois==1|| mois==3|| mois==5 ||mois== 7 || mois==8 || mois== 10 || mois==12) && (jour<31)&&(jour>0))
        {
            jour++;
        }
        else if((mois==4 || mois==6 || mois==9 || mois==11)&&(jour<30)&&(jour>0))
        {
            jour++;
        }
        else if((est_bissextile(annee)==true)&&(jour<29)&&(jour>0))
        {
            jour++;
        }
        else if((est_bissextile(annee)==false)&&(jour<28)&&(jour>0))
        {
            jour++;
        }
        else
            break;

        }

 }
ostream& operator<<(ostream& flux, date d)
{
    flux<<d.getjour()<<"/ "<<d.getmois()<<"/"<<d.getannee()<<".";
    return flux;
}
/*
istream& operator>>(istream& flux, date& d){
    flux>>d.jour>>d.mois>>d.annee;

    return flux;
}*/
void test(date d){
    if((d.getmois()<1)&&(d.getmois()>12)){
       cout<<"Erreur...mois invalid"<<endl;
       }
    else if((d.est_findemois(d.getmois(),d.getannee())==30)&&(d.getjour()>30)){
        cout<<"Erreur...jour invalide"<<endl;
    }
     else if((d.est_findemois(d.getmois(),d.getannee())==31)&&(d.getjour()>31)){
        cout<<"Erreur...jour invalide"<<endl;
    }
     else if((d.est_findemois(d.getmois(),d.getannee())==29)&&(d.getjour()>29)){
        cout<<"Erreur...jour invalide"<<endl;
    }
    else if((d.est_findemois(d.getmois(),d.getannee())==28)&&(d.getjour()>28)){
        cout<<"Erreur...jour invalide"<<endl;
    }
    else if(d.getmois()==0){
        cout<<"erreur...mois null!!"<<endl;
    }
}


bool operator==(date d,date b){
    if(d.jour==b.jour){
        if(d.mois==b.mois){
            if(d.annee==b.annee){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
bool operator<(date d ,date b){
    if(d.annee<b.annee){
        return true;
    }
    else if(d.annee==b.annee){
        if(d.mois<b.mois){
            return true;
        }
        else if(d.mois==b.mois){
            if(d.jour<b.jour){
                return true;
            }
            else{
                return false;
            }
        }
        else
            return false;
    }
    else
        return false;
}
