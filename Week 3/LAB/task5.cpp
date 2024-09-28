#include<iostream>
using namespace std;
main()
{
cout << "Enter student name:";
string name;
cin>>name;
cout << "Enter matric marks:";
float marks;
cin>>marks;
cout << "Enter FSC marks:";
int FSCmarks;
cin>> FSCmarks;
cout << "Enter ecat marks:";
float ecatmarks;
cin>>ecatmarks;
float aggregate;
aggregate=0.25*marks+0.45*FSCmarks+0.30*ecatmarks;
cout<<aggregate;







}



