#include<iostream>
using namespace std;
void compare(float n1,float n2);
main()
{
float n1,n2;
cout<<"Enter first number:";
cin>>n1;
cout<<"Enter second number:";
cin>>n2;
compare(n1,n2);
}
void compare(float n1,float n2)
{
if(n1==n2)
{cout<<"True";
}
if(n1!=n2)
{
cout<<"False";
}




}