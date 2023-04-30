#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include "iostream"
using namespace std;
class Date
{
  private:
    int jour  ;
    int mois  ;
    int annee ;
  public:
    Date(int j ,int m ,int a);
    Date();
     int getJour();
    int getMois();
    int getAnnee();
    int EstFindMois(int M,int y);
    bool EstBissextile(int A);
    void incrementerdate();
    friend ostream& operator<<(ostream& flux, Date& d);
    friend istream& operator>>(istream& flux, Date &d);
    friend bool operator==(Date d,Date b);
    friend bool operator<(Date d ,Date b);
};

#endif // DATE_H_INCLUDED
