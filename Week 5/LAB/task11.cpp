#include<iostream>
using namespace std;
int calculatepoolstate(int V,int P1,int P2,float H);
main()
{
float H;
int V,P1,P2;
cout<<"Enter volume of pool in litres:";
cin>> V;
if(V<1)
{
cout<<"Please Enter volume in range of (1-10000).";
}
if(V>10000)
{
cout<<"Please Enter volume in range of (1-10000).";
}
cout<<"Enter flow rate of first pipe per hour:";
cin>> P1;
if(P1<1)
{
cout<<"Please Enter flow rate in range of (1-5000).";
}
if(P1>5000)
{
cout<<"Please Enter flow rate in range of (1-5000).";
}
cout<<"Enter flow rate of second pipe per hour:";
cin>> P2;
if(P2<1)
{
cout<<"Please Enter flow rate in range of (1-5000).";
}
if(P2>5000)
{
cout<<"Please Enter flow rate in range of (1-5000).";
}
cout<<"Enter hours that worker is absent:";
cin>> H;
if(H<1)
{
cout<<"Please Enter hours in range of (1-24).";
}
if(H>24)
{
cout<<"Please Enter hours in range of (1-24).";
}
calculatepoolstate(V,P1,P2,H);
}
int calculatepoolstate(int V,int P1,int P2,float H)
{
float volume=(P1+P2)*H;
float filled=(volume/V)*100;
int Pipe1=((P1*H)/volume)*100;
int Pipe2=((P2*H)/volume)*100;
if(volume<V)
{
cout<<"The pool is "<<filled<<"% full. Pipe 1:"<<Pipe1<<"%. Pipe 2: "<<Pipe2<<"%";
}
int overflow=volume-V;
if(volume>V)
{
cout<<"For "<<H<<" hours, the pool overflows with "<<overflow<<" litres";
}
}