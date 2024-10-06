#include<iostream>
#include<cmath>
void square(float number);
using namespace std;
main()
{
float number;
cout<<"Enter a number:";
cin>> number;
square(number);
}
void square(float number)
{
cout<<"The square root of "<<number<<" is:"<<sqrt(number);
}