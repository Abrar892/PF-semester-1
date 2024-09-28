#include<iostream>
using namespace std;
void duration(int h, int m);
main()
{
int h,b;
cout<<"Enter the number of hours:";
cin>> h;
cout<<"Enter the number of minutes:";
cin>> m;
h=60*60;
m=1/60;
duration(h,m);
}
void duration(int h,int m)
{
if(h>m)
{
cout<<h;
}
if(m>h)
{
cout<<m;
}
}