#include<iostream>
using namespace std;
int LCM(int num1, int num2);
int GCD(int num1, int num2);
main()
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>> num2;
    int gcd=GCD(num1,num2);
    int lcm=LCM(num1,num2);
    cout<<"GCD: "<<gcd<<endl;
    cout<<"LCM :"<<lcm<<endl;
    return 0;
}
int GCD(int num1, int num2)
{
    while(num2 !=0)
    {
        int remain=num1%num2;
        num1=num2;
        num2=remain;
    }
    return num1;
}
int LCM(int num1, int num2)
{
    int gcd=GCD(num1, num2);
    return (num1*num2)/gcd;
}