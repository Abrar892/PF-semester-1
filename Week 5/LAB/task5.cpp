#include<iostream>
#include<cmath>
using namespace std;
main()
{
float a,b,c;
cout<<"Enter value of a:";
cin>> a;
if(a==0)
{
cout<<"Coefficient 'a' cannot be zero in a quadratic equation."<<endl;
}
cout<<"Enter value of b:";
cin>>b;
cout<<"Enter value of c:";
cin>>c;
float determinant=b*b-4*a*c;
if(determinant>0)
{
float root1=(-b+sqrt(determinant))/(2*a);
 float root2=(-b-sqrt(determinant))/(2*a);
 cout<<"Solutions: x= "<<root1<<" and x "<<root2;
}
if(determinant==0)
{
float root1,root2;
root1=root2=-b/(2*a); 
 cout<<"Solutions: x= "<<root1;
}
if(determinant<0)
{
float real,image;
real=-b/(2*a);
image=sqrt(-determinant)/(2*a);
 cout<<"Complex Solutions: x= "<<real<<" + "<<image<<"i and x "<<real<<" - "<<image;
}
}