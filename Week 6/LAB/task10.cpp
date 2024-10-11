#include<iostream>
bool greaterghy(int num1,int num2,int num3);
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
cout<< greaterghy(num1, num2, num3);
return 0;
}
bool greaterghy(int num1,int num2,int num3)
{
if(num1==num2==num3)
{
 return true;
}
if(num2!=num1!=num3)
{
 return false;
}
}