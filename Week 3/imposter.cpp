#include<iostream>
using namespace std;
main()
{
cout<<"Enter imposter count:";
int impostercount;
cin>>impostercount;
cout<<"Enter player count:";
int player;
cin>>player;
int imposter;
imposter=(impostercount*100)/player;
cout<<"Chances of being a imposter is:"<<imposter<< "%";






}