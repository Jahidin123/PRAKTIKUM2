#include <iostream>
using namespace std;
int main ()
{int a,b,c,d,terbesar;
cout<<"masukan bilangan 1:";
cin>>a;
cout<<"masukan bilangan 2:";
cin>>b;
cout<<"masukan bilangan 3:";
cin>>c;
cout<<"masukan bilangan 4:";
cin>>d;

if (a>b&&a>c&&a>d)
cout<<"nilai terbesar :"<< a <<endl;
if (b>a&&b>c&&b>d)
cout<<"nilai terbesar :"<< b <<endl;
if (c>a&&c>b&&c>d)
cout<<"nilai terbesar :"<< c <<endl;
if (d>a&&d>b&&d>c)
cout<<"nilai terbesar :"<< d <<endl;

return 0;
}
