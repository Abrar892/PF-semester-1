#include<iostream>
using namespace std;
main()
{
cout<<"Enter initial velocity (m/s):";
int initialvelocity;
cin>>initialvelocity;
cout<<"Enter acceleration (m/s^2):";
int acceleration;
cin>>acceleration;
cout<<"Time (s):";
int Time;
cin>>Time;
int finalvelocity;
finalvelocity=(acceleration*Time)+initialvelocity;
cout<<"Final velocity is:"<< finalvelocity;






}