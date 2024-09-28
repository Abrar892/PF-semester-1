#include<iostream>
using namespace std;
void cube();
main()
{
   cube();
}
void cube()
{
int side;
cout<<"Enter the side of rubick's cube:";
cin>> side;
int sticker;
sticker=side*side*6;
cout<<"Number of stickers needed:"<< sticker;
}