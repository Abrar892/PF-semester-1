#include<iostream>
using namespace std;
float pyramid(int length,int width,int height, string unit);
main()
{
int length,width,height;
string unit;
cout<<"Enter length of pyramid (in metres):";
cin>> length;
cout<<"Enter the width of pyramid (in metres):";
cin >> width;
cout<<"Enter the height of pyramid (in metres):";
cin>> height;
cout<<"Enter the desired output unit(millimetres, centimetres, metres, kilometres):";
cin>> unit;
float volume=pyramid(length,width,height,unit);
cout<<"The volume of pyramid is: "<<volume<<" cubic "<< unit;
return 0;
}
float pyramid(int length,int width,int height, string unit)
{
float output=(length*width*height)/3;
float volume;
if(unit=="metres")
{
volume=output;
}
if(unit=="millimetres")
{
volume=output*1000000000;
}
if(unit=="centimetres")
{
volume=output*1000000;
}
if(unit=="kilometres")
{
volume=output/1000000000;
}
return volume;
}