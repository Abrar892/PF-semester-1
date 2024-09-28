#include<iostream>
using namespace std;
main()
{
cout<<"Enter movie name:";
string movie;
cin>>movie;
cout<<"Enter adult ticket price:";
int adult;
cin>>adult;
cout<< "Enter child ticket price:";
int child;
cin>> child;
cout<<"Enter the number of adult tickets sold:";
int numberofadult;
cin>>numberofadult;
cout<<"Enter the number of child tickets sold:";
int numberofchild;
cin>>numberofchild;
cout<<"Enter the percentage of amount to be denoted:";
int donate;
cin>>donate;
int amount;
amount=adult*numberofadult+child*numberofchild;
int charity;
charity=amount/donate;
int remaining;
remaining=amount-charity;
cout <<" MOVIE:"<< movie <<endl <<"Total amount generated from ticket sales:"<<amount"$"<<endl<<"Donation to charity:"<<charity"$"<<endl<<"Remaining amount after denotion:"<<remaining"$";









}