#include<iostream>
using namespace std;
string check(int speed);
int main()
{
int speed;
cout<<"Enter the speed: ";
cin>> speed;
cout<< check(speed);
return 0;
}
string check(int speed)
{
    string result;
 if(speed<=10)   
{
    result= "slow";
}
else if(speed>10 && speed<=50)   
{
    result= "average";
}
else if(speed>50 && speed<=150)   
{
    result= "fast";
}
else if(speed>150 && speed<=1000)   
{
    result= "ultra-fast";
}
else if(speed>1000)   
{
    result= "extremely fast";
}
return result;
}