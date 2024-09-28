#include<iostream>
using namespace std;
void bonus(int a,int b);
main()
{
int a,b;
cout<<"Enter your position:";
cin>> a;
cout<<"Enter your friend's position:";
cin>> b;
bonus(a,b);
}
void bonus(int a,int b)
{
if(b>a)
if(b-a>=1)
if(b-a<=6)
{ cout<<"True";}
if(b>a)
if(b-a<1)
if(b-a>6)
{
cout<<"False";
}
}