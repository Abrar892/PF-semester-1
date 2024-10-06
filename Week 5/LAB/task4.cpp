#include<iostream>
#include<cmath>
using namespace std;
void square(float distance,float angle);
main()
{
float distance, angle;
cout<<"Enter the distance from base of tree (in feet):";
cin>> distance;
cout<<"Enter the angle of elevation (in degrees):";
cin>> angle;
square(distance,angle);
}
void square(float distance,float angle)
{
float height;
float rad;
rad=angle/57.2958;
height=distance*tan(rad);
cout<<"the hieght of tree is:"<<height;

}