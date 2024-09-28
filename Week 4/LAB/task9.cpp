#include<iostream>
using namespace std;
void petrol();
main()
{
    petrol();
}
void petrol()
{
float distance;
cout<<"Enter the distance:";
cin>> distance;
float fuel;

if(distance>10)
{
fuel=distance*10;
}
if(distance<=10)
{
fuel=100;
}
cout<<"Fuel needed:"<< fuel;
}