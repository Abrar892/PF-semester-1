#include<iostream>
using namespace std;
string buy(float cost,string brand);
main()
{
float cost;
string brand;
cout<<"Enter the dress cost: $";
cin>> cost;
cout<<"Enter the dress brand: $";
cin>> brand;
cout<<buy(cost, brand);
return 0;
}
string buy(float cost, string brand)
{
if(cost<1500 && brand=="MTJ")
{
return "Congratulations! You can buy the dress.";
}
return "Sorry, the dress doesn't meet the criteria for purchase.";
}