#include<iostream>
using namespace std;
void add(float n1,float n2);
void subtract(float n1,float n2);
void multiplication(float n1,float n2);
void division(float n1,float n2);
main()
{
float n1,n2;
char op;
cout<<"Enter first number:";
cin>>n1;
cout<<"Enter second number";
cin>>n2;
cout<<"Enter operation";
cin>> op;
if(op=='+')
{
add(n1,n2);
}
if(op=='-')
{
subtract(n1,n2);
}
if(op=='*')
{
multiplication(n1,n2);
}
if(op=='/')
 {
division(n1,n2);
 }
}
void add(float n1,float n2)
{ int sum;
sum=n1+n2;
cout<<"Sum:"<<sum;
}
void subtract(float n1,float n2)
{ int subtract;
subtract=n1-n2;
cout<<"Sum:"<<subtract;
}
void multiplication(float n1,float n2)
{ int multiply;
multiply=n1*n2;
cout<<"Sum:"<<multiply;
}
void division(float n1,float n2)
{ int divide;
divide=n1/n2;
cout<<"Sum:"<<divide;
}


