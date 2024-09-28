#include<iostream>
using namespace std;
void flowershop(int redrose,int whiterose,int tulip);
main()
{
int redrose,whiterose,tulip;
cout<<"Red Rose:";
cin>> redrose;
cout<<"White Rose:";
cin>> whiterose;
cout<<"Tulips:";
cin>> tulip;
 flowershop(redrose,whiterose,tulip);
}
void flowershop(int redrose,int whiterose,int tulip)
{
float price;
price=redrose*2+whiterose*4.10+tulip*2.50;
cout<<"Original price: $"<< price<<endl;
if(price<200)
{
cout<<"No discount applied.";
}
float discount;
if(price>200)
{discount=price-price*0.20;
}
cout<<"Price after discount: $"<<discount;
}