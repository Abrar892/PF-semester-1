#include<iostream>
using namespace std;
main()
{
cout<<"Enter name of cricket yeam:";
string name;
cin>>name;
cout<<"Enter the number of wins:";
int win;
cin>>win;
cout<<"Enter the number of draws:";
int draw;
cin>>draw;
cout<<"Enter the number of losses:";
int loss;
cin>>loss;
int points;
points=win*3+draw+loss*0;
cout<<"Team has obtained "<< points<< "points in the Asia Cup tournament";







}
