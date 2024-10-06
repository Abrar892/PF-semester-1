#include<iostream>
using namespace std;
string task(int number);
 main()
{
int number;
cout<<"Enter a five digit number";
cin>> number;
if(number<=9999)
{
cout<<"Please Enter a five digit number";
}
if(number>99999)
{
cout<<"Please Enter a five digit number";
}
cout<<task(number);
return 0;
}
string task(int number)
{
int sum;
if(number>0)
{
sum =number%10;
number/10;
}
if(sum%2==0)
{
return "Evenish";}
if(sum%2!=0)
{
return "Oddish";}
}

