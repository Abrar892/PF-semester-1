#include<iostream>
using namespace std;
void perimetre();
char shape;
float value;
main()
{

cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
cin>> shape;
cout<<"Enter the value: ";
cin>> value;
perimetre();
}
void perimetre()
{
float output=value;
if(shape=='s')
{
cout<<"The Perimetre is: "<<output*4;
}
if(shape=='c')
{
cout<<"The perimetre is: "<<output*6.28;
}
if(shape=='t')
{
cout<<"The perimetre is: "<<output*3;
}
if(shape=='h')
{
cout<<"The perimetre is: "<<output*6;
}
}