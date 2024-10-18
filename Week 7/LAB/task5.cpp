#include<iostream>
using namespace std;
int add(int num);
main()
{
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    cout<< "Sum of digits: "<< add(num);
    return 0;
}
int add(int num)
{
    int sum=0;
    int a;
    while(num>0)
    {
        int last=num%10;
        sum=sum+last;
        num=num/10;
    }
    return sum;
}