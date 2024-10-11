#include<iostream>
void greaterghy(int num1,int num2,int num3);
using namespace std;
main()
{
int num1,num2,num3;
cout<<"Enter the first number: ";
cin>> num1;
cout<<"Enter the second number: ";
cin>> num2;
cout<<"Enter the third number: ";
cin>> num3;
greaterghy(num1, num2, num3);
return 0;
}
void greaterghy(int num1,int num2,int num3)
{
if(num1>num2 && num1>num3)
{
 cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<num1;
}
if(num2>num1 && num2>num3)
{
 cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<num2;
}
if(num3>num2 && num3>num1)
{
 cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<num3;
}
}