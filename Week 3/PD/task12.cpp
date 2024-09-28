#include<iostream>
using namespace std;
main()
{
cout<<"Number of square metres you can paint:";
int squaremetres;
cin>>squaremetres;
cout<<"Height of single wall (in metres):";
int height;
cin>>height;
cout<<"Width of single wall (in metres):";
int width;
cin>>width;
int numbers;
numbers=squaremetres/(height*width);
cout<<"Number of walls you can paint:"<<numbers;





}