#include<iostream>
using namespace std;
void sale();
main()
{

sale();

}
void sale()
{
string day;
cout<<"Enter day of purchase:";
cin>>day;
float price;
cout<<"Enter total amount:";
cin>> price;
float amount;
amount=price;
if(day=="Sunday")
{
amount=amount-price*0.10;
}
cout<<"Payable amount:"<< amount;

}