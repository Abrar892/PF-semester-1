#include<iostream>
using namespace std;
char checkalphabetcase(char input);
main()
{
char input,output;
 cout<<"Enter a character (A/a):";
 cin>> input;
 output= checkalphabetcase(input);
  return 0;   
} 
char checkalphabetcase(char input)
{ 
    if(input=='A')
    {cout<<"You have entered capital A";
    return 1;}
    if(input=='a')
    {cout<<"You have entered small a";}
}