#include<iostream>
using namespace std;
void menu();
void aggregate();
void marks();
main()
{
  menu();
  aggregate();
  marks();
}
void menu()
{
string name;
cout<<"University Admission Mannagement"<<endl;
}
void aggregate()
{
string name1;
cout<<"Student Name:"<<endl;
cin>> name1;
float matric;
cout<<"Matric Marks:"<<endl;
cin>> matric;
float inter;
cout<<"Inter Marks:"<<endl;
cin>> inter;
float ecat;
cout<<"Ecat Marks:"<<endl;
cin>> ecat;
float agg;
agg=(matric/1100)*30+(inter/550)*30+(ecat/400)*40;
cout<<"Aggregate:"<<agg<<"%";
}
void marks()
{
string name2;
cout<<"nameStd1:";
cin>> name2;
string name3;
cout<<"nameStd2:";
cin>> name3;
int em;
cout<<"Ecat Marks:";
cin>>em;
int em1;
cout<<"Ecat Marks:";
cin>> em1;
if(em>em1)
{cout<<"First Roll Number:"<<name2<<endl;
cout<<"Second Roll Number:"<<name3<<endl;
}
if(em1>em)
{cout<<"First Roll Number:"<<name3<<endl;
cout<<"Second Roll Number:"<<name2<<endl;
}
}