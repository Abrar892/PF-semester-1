#include<iostream>
using namespace std;
main()
{
int num;
cout<<"Enter a 4 digit number:";
cin>>num;
int num1;
num1=num%10;
int num2;
num2=(num1/10)%10;
int num3;
num3=(num2/10)%10;
int num4;
num4=(num3/10)%10;
int sum;
sum=num1+num2+num3+num4;
cout<<"Sum of individual numbers:"<<sum;
}