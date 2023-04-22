#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include<iostream>
using namespace std;
class date
{
  private:
    int jour  ;
    int mois  ;
    int annee ;
  public:
    date(int j ,int m ,int a);
    date();
    int getJour();
    int getMois();
    int getAnnee();
    int EstFindMois(int M,int y);
    bool EstBissextile(int A);
    void incrementerdate();
    friend ostream& operator<<(ostream& flux, date& d);
    friend istream& operator>>(istream& flux, date &d);
    friend bool operator==(date d,date b);
    friend bool operator<(date d ,date b);
    /*ostream operator<<(ostream& flux);*/

};
#endif // TRADING1_H_INCLUDED



