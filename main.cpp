#include <iostream>
#include "trading.h"

using namespace std;

int main()
{
int j ,m ,a;

cout<<"donner une date"<<endl;

cin>>j>>m>>a;
date d(j,m,a);
/*
test(d);*/
d.incrementerdate();
cout<<d;

return 0;
}
