#include<iostream>
#include"test.h"
#include"date.h"
using namespace std;
void test::test_date()
{
    date a(1,1,2012),b(2,1,2012),c(31,1,2012),d(1,2,2012),e(28,2,2012),f(29,2,2012),g(1,3,2012),h(30,4,2012),i(1,5,2012),j(31,12,2012),k(1,1,2013);
    a.incrementerdate();
    if((a==b)==false){
        cerr<<"erreur...verifier l'imlementation de la méthode incrementerdate(1/1->2/1)"<<endl;
    }
    else{
        cerr<<"test_1 passed"<<endl;
    }
    c.incrementerdate();
    if((c==d)==false){
        cerr<<"erreur...verifier l'imlementation de la méthode incrementerdate(les mois 1,3,5,7,8,11,12 ne contient que 31 jour))"<<endl;
    }
    else{
        cerr<<"test_2 passed"<<endl;
    }
    e.incrementerdate();
    if((e==f)==false){
        cerr<<"erreur...verifier l'imlementation de la méthode incrementerdate(annee bissextille 28/2->29/2)"<<endl;
    }
    else{
        cerr<<"test_3 passed"<<endl;
    }
    f.incrementerdate();
    if((f==g)==false){
        cerr<<"erreur...verifier l'imlementation de la méthode incrementerdate(annee bissextille 29/2->1/3)"<<endl;
    }
    else{
        cerr<<"test_4 passed"<<endl;
    }
    h.incrementerdate();
    if((h==i)==false){
        cerr<<"erreur...verifier l'imlementation de la méthode incrementerdate(les mois 4,6,9,11 ne contient que 30 jour)"<<endl;
    }
    else{
        cerr<<"test_5 passed"<<endl;
    }
    j.incrementerdate();
    if((j==k)==false){
        cerr<<"erreur...verifier l'imlementation de la méthode incrementerdate(fin d'annee)"<<endl;
    }
    else{
        cerr<<"test_6 passed"<<endl;
    }
}

