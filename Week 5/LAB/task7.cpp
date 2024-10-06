#include<iostream>
using namespace std;
bool isSymmetrical(int number);
main()
{
int number;
cout<<"Enter a three-digit number:";
cin>> number;
if(number>999)
{
cout<<"Please Enter a three digit number";
}
if(number<=99)
{
cout<<"Please Enter a three digit number";
}
if(isSymmetrical(number)==true)
{
 cout<<"The number is symmetrical.";
 return 0;}
if(isSymmetrical(number)==false)
{
cout<<"The number is not symmetrical.";
return 0;}
}
bool isSymmetrical(int number)
{
int first=number/100;
int second=number%10;
if(first==second)
{ return true;}
if(first!=second)
{ return false;}
}
