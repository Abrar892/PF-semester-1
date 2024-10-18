#include<iostream>
using namespace std;
int check(int number, int digit);
main()
{
    int number, digit;
    cout<<"Enter a number: ";
    cin>> number;
    cout<<"Enter the digit to check: ";
    cin>> digit;
    int result=check(number,digit);
    cout<<"Frequency: "<<result;
}
int check(int number, int digit)
{
    int count=0;
    int remain;
    while(number!=0)
    {
        remain=number%10;
        if(remain==digit)
        {
            count++;
        }
        number=number/10;
    }
    return count;
}