#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
int holidays;
cout<<"Holidays:";
cin>> holidays;
pet (holidays);
}
void pet(int holidays)
{
int norm=30000;
int workingdays=365-holidays;
int playtime=workingdays*63+holidays*127;
int sleep=playtime-norm;
if(sleep<0)
{
sleep=-sleep;
}
int h=sleep/60;
int m=sleep%60;
if(playtime>norm)
{
cout<<"Tom will run away"<<endl;
cout<<h<<" hours and"<<m<<" minutes for play";
}
if(norm>playtime)
{
cout<<"Tom sleeps well"<<endl;
cout<<h<<" hours and "<<m<<" minutes less for play";
} 
}