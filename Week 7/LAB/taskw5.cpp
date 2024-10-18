#include<iostream>
using namespace std;
int add();
main()
{
    int total;
    total=add();
    cout<<total;
}
int add()
{
    int sum=0;
    for(int i=1; i<=100; i=i+1)
    {
        sum=sum+i;
    }
    return sum;
}