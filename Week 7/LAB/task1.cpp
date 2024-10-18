#include<iostream>
using namespace std;
void counting();
main()
{
    int a;
    cout<<"Enter a number: ";
    cin>> a;
    int multiply;
    for(int i=0;i<=10;i++)
    {
        multiply=a*i;
         cout<<a<<" * "<<i<<"="<<multiply<<endl;
    }
}