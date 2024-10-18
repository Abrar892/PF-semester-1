#include<iostream>
using namespace std;
int total(int num);
main()
{
    int num;
    cout<<"Enter a number: ";
    cin>> num;
    cout<<"Total number of digits: "<<total(num);
   return 0;
}
int total(int num)
{
int digit=0;

    if(num==0)
    {
        digit=1;
    }
    while(num!=0)
    {
        num /=10;
        digit++;
    }
    return digit;
}