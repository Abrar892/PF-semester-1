#include<iostream>
using namespace std;
void test(int score);
main()
{
int score;
cout<<"Enter your score:";
cin>> score;
if(score>50){
cout<<"Pass";
}
if(score<50){
cout<<"Fail";
}
}