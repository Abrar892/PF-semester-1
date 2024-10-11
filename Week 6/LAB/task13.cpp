#include<iostream>
using namespace std;
float low(int n1, string period);
main()
{
    int n1;
    string period;
    cout<<"Enter the number of kilometres: ";
    cin>> n1;
    cout<<"Enter the period of the day (day/night): ";
    cin>> period;
    cout<<"Lowest price for "<<n1<<" kilometres: "<<low(n1, period)<<" EUR";
    return 0;
}
float low(int n1, string period)
{
    float result;
    if(n1>0 && n1<20 && period=="day")
    {
result=(n1*0.79)+0.70;
    }
    if(n1>0 && n1<20 && period=="night")
    {
result=(n1*0.90)+0.70;
    }
if(n1>=20 && n1<100)
    {
result=n1*0.09;
    }
    if(n1>=100)
    {
result=(n1*0.06);
    }
    return result;
}