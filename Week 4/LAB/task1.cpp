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
fuel=10*distance;
cout<<"Fuel needed:"<< fuel;
}