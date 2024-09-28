#include<iostream>
using namespace std;
main()
{
cout<<"Enter vegetable price per kilogram:";
float vegetable;
cin>>vegetable;
cout<<"Enter fruit price per kilogram:";
float fruit;
cin>>fruit;
cout<<"Enter total kilogram of vegetable:";
int kilogramofvegetable;
cin>>kilogramofvegetable;
cout<<"Enter total kilogram of fruits:";
int kilogramoffruit;
cin>>kilogramoffruit;
float earnings;
earnings=(vegetable*kilogramofvegetable+fruit*kilogramoffruit)/1.94;
cout<<"TOTAL EARNING is "<<earnings;






}