#include<iostream>
using namespace std;
main()
{
cout<<"Enter the size of fertilizer bag in pounds:";
int size;
cin>>size;
cout<<"Enter the cost of bag:";
int cost;
cin>>cost;
cout <<"Enter the area in square feet that can be convered by the bag:";
int area;
cin>> area;
int costperpound;
costperpound=cost/size;
cout<<"Cost of fertilizer per pound is:"<<costperpound<<"$"<<endl;
int costpersquare;
costpersquare=area*size;
cout<<"Cost of fertilixing per square foot is:"<<costpersquare<<"$";








}