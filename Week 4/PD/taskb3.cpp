#include<iostream>
using namespace std;
void discount();
main()
{

 discount();
}
void discount()
{
string name;
cout<<"Enter country's name:";
cin>> name;
float price;
cout<<"Enter ticket price in dollars: $";
cin>> price;
float amount;
amount=price;
if(name=="Pakistan")
{
amount=amount-price*0.05;
}
if(name=="Ireland")
{
amount=amount-price*0.10;
}
if(name=="India")
{
amount=amount-price*0.20;
}
if(name=="England")
{
amount=amount-price*0.30;
}
if(name=="Canada")
{
amount=amount-price*0.45;
}
cout<<"Final ticket price after discount: $"<<amount;
}