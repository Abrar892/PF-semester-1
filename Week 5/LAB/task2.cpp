#include<iostream>
#include<cmath>
void power(float number1, float number2);
using namespace std;
main()
{
float number1,number2;
cout<<"Enter base number:";
cin>> number1;
cout<<"Enter exponent:";
cin>> number2;
power(number1,number2);
}
void power(float number1, float number2)
{
cout<<number1<<" raised to the power "<<number2<<" is:"<<pow(number1,number2);
}