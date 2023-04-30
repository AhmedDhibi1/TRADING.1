#include <iostream>
#include"Date.h"
#include<cstdlib>
#include<cstring>
using namespace std;
int Date::getJour()
{
    return jour;
}
int Date::getMois()
{
    return mois;
}
int Date::getAnnee()
{
    return annee;
}
Date::Date(int j ,int m ,int a)
{
    jour=j;
    mois=m;
    annee=a;
}
Date::Date()
{

}
bool Date::EstBissextile(int A)
{
    if(A%4==0)
        return true;
    else
        return false;
}
int Date::EstFindMois(int M,int Y)
{
    if(M==1|| M==3 || M==5 || M==7 || M==8 || M==10 || M== 12)
        return 31;
    else if(M==4|| M==6 || M==9 || M==11 )
        return 30;
    else if((M==2 )&&(EstBissextile(Y)==true))
        return 29;
    else if((M==2 )&&(EstBissextile(Y)==false))
        return 28;
    else
        return 0;
}
void Date::incrementerdate()
{
    if((mois<=0)||(mois>12))
        cout<<"Erreur...Mois invalide!!"<<endl;
    else if((EstFindMois(mois,annee)==30)&&(jour>30))
    {
        cout<<"Erreur...jour invalide"<<endl;
    }
    else if((EstFindMois(mois,annee)==31)&&(jour>31)){
        cout<<"Erreur...jour invalide"<<endl;
    }
    else if((EstFindMois(mois,annee)==29)&&(jour>29))
    {
        cout<<"Erreur...jour invalide"<<endl;
    }
    else if((EstFindMois(mois,annee)==28)&&(jour>28))
    {
        cout<<"Erreur...jour invalide"<<endl;
    }
    else if(jour==0)
    {
        cout<<"erreur...jour null!!"<<endl;
    }
    else if(annee==0||annee>2023)
        cout<<"erreur...date null ou date dans le future !!!!"<<endl;
    else if((EstFindMois(mois,annee)==30)&&(jour==30))
        {
            jour=1;
            mois++;
        }
    else if((EstFindMois(mois,annee)==31)&&(jour==31))
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
    else if((EstFindMois(mois,annee)==29)&&(jour==29))
    {
        jour=1;
        mois++;
    }
    else if((EstFindMois(mois,annee)==28)&&(jour==28))
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
    else if((EstBissextile(annee)==true)&&(jour<29)&&(jour>0))
    {
        jour++;
    }
    else if((EstBissextile(annee)==false)&&(jour<28)&&(jour>0))
    {
        jour++;
    }
}
ostream& operator<<(ostream& flux, Date& d)
{
    flux<<d.getJour()<<"/"<<d.getMois()<<"/"<<d.getAnnee();
    return flux;
}

istream& operator>>(istream& flux, Date& d)
{
    char date[100];
    flux.getline(date,100,'/');
    d.jour=atoi(date);
    flux.getline(date,100,'/');
    d.mois=atoi(date);
    flux.getline(date,100,';');
    d.annee=atoi(date);
    return flux;
}
bool operator==(Date d,Date b)
{
    if(d.jour==b.jour)
    {
        if(d.mois==b.mois)
        {
            if(d.annee==b.annee)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
bool operator<(Date d ,Date b){
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
