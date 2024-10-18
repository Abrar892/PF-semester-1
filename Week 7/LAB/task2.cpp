#include<iostream>
using namespace std;
void generate(int length);
main()
{
    int length;
    cout<<"Enter the length of Fibonacci series: ";
    cin>> length;
    generate(length);
   
}
void generate(int length)
{
    int n1=0;
    int n2=1;
    int sum;


    if(length>=1)
    {
        cout<<n1<<"  ";
    }
    if(length>=2)
    {
        cout<<n2<<"  ";
    }
    for(int i=3;i<=length;i++)
    {
        sum=n1+n2;
        cout<<sum<<"  ";
        n1=n2;
        n2=sum;
    
        
    }
}