#include<iostream>
using namespace std;
void checker();
main()
{

checker();
}
void checker()
{
int people;
cout<<"Enter the number of people in household:";
cin>> people;
int tp;
cout<<"Number of Rolls of tp:";
cin>> tp;
int sheetsrequired;
sheetsrequired=people*57;
int sheetsavailable;
sheetsavailable=tp*500;
int day=sheetsavailable/sheetsrequired;
if(sheetsavailable>=sheetsrequired)
{
cout<<"Your TP will last "<<day<<" days, no need to panic!";
}
if(sheetsavailable<sheetsrequired)
{
cout<<"Your TP will last only "<<day<<" days, buy more!";
}
}
