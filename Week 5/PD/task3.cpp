#include<iostream>
using namespace std;
string projecttimecalculation(int neededhours,int totaldays,int workers);
main()
{
int neededhours,totaldays,workers;
cout<<"Enter the needed hours: ";
cin>> neededhours;
cout<<"Enter the day that firm has: ";
cin>> totaldays;
cout<<"Enter the number of all workers: ";
cin>> workers;
projecttimecalculation(neededhours,totaldays,workers);
}
string projecttimecalculation(int neededhours,int totaldays,int workers)
{
float effectivedays=totaldays-(totaldays*0.10);
int workinghoursperday=10;
int totalavailablehours=effectivedays*workinghoursperday*workers;
int hoursleft;
if(totalavailablehours<neededhours)
{
hoursleft=neededhours-totalavailablehours;
cout<<"Not enough time!" + to_string(hoursleft) + " hours needed";
}
if(totalavailablehours>neededhours)
{
hoursleft=totalavailablehours-neededhours;
cout<<"Yes!" + to_string(hoursleft) + " hours left";
}
}