#ifndef TRADING_H_INCLUDED
#define TRADING_H_INCLUDED
using namespace std;
class date
{
  private:
    int jour  ;
    int mois  ;
    int annee ;
  public:
    date(int j ,int m ,int a);
    int getjour();
    int getmois();
    int getannee();
    int est_findemois(int M,int y);
    bool est_bissextile(int A);
    void incrementerdate();
    friend ostream& operator<<(ostream& flux, date d);
    friend istream& operator>>(istream& flux, date d);
    friend bool operator==(date d,date b);
    friend bool operator<(date d ,date b);
    /*ostream operator<<(ostream& flux);*/

};
/*
class PersistancePrixJournaliers
{
    public:
        static vector<PrixJournalier> lirePrixJournaliersDUnFichier(string chemin){
            vector<PrixJournalier> historique;
            ifstream f(chemin);
            int nbLignes= 0;
            string entete;
            if(f.is_open()){
                f>>entete;
                while(!f.eof()){
                    PrixJournalier pj;
                    f>>(pj);
                    historique.push_back(pj);
                    nbLignes++;
                }
            }
            return historique;
        }
}*/
void test(date d);



#endif // TRADING_H_INCLUDED
