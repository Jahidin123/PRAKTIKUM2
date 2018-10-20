#include <iostream>
using namespace std;
int main ()
{int a,b,c;
cout<<"masukan bilangan 1:";
cin>>a;
cout<<"masukan bilangan 2:";
cin>>b;
cout<<"masukan bilangan 3:";
cin>>c;


if (a>b&&a>c)
cout<<"nilai terbesar :"<< a <<endl;
if (b>a&&b>c)
cout<<"nilai terbesar :"<< b <<endl;
if (c>a&&c>b)
cout<<"nilai terbesar :"<< c <<endl;


return 0;
}
