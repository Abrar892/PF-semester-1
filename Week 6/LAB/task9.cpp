#include<iostream>
using namespace std;
string check(int age,char gender);
main()
{
int age;
char gender;
cout<<"Enter your age: ";
cin>> age;
cout<<"Enter your gender (m/f): ";
cin>> gender;
cout<<"Your personal title is: "<<check(age, gender);
return 0;
}
string check(int age,char gender)
{
if(gender=='m' && age>=16)
{
return "Mr.";
}
if(gender=='m' && age<16)
{
return "Master";
}
if(gender=='f' && age>=16)
{
return "Ms.";
}
if(gender=='f' && age<16)
{
return "Miss";
}
}



