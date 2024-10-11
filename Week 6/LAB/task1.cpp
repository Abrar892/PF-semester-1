#include<iostream>
void greaterghy(int num1,int num2);
using namespace std;
main()
{
int num1,num2;
cout<<"Enter the first number: ";
cin>> num1;
cout<<"Enter the second number: ";
cin>> num2;
greaterghy(num1, num2);
return 0;
}
void greaterghy(int num1,int num2)
{
if(num1>num2)
{
 cout<<"1";
}
else{cout<< "0";
}
}