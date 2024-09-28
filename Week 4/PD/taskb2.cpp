#include<iostream>
using namespace std;
void reverse(string t);
main()
{
string t;
cout<<"Enter 'true or false':";
cin>> t;
reverse(t);
}
void reverse(string t)
{
if(t=="true")
{cout<<"False";
}
if(t=="false")
{
cout<<"True";
}
}