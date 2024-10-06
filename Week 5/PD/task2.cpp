#include<iostream>
using namespace std;
float taxcalculator(char type,float price);
main()
{
char type;
float price;
cout<<"Enter vehicle type code (M, E, S, T, V): ";
cin>> type;
cout<<"Enter the price of vehicle: ";
cin>> price;
float final=taxcalculator(type,price);
cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is "<<final<<"$"<<endl;
return 0;
}
float taxcalculator(char type,float price)
{
float final;
float tax;
if(type=='E')
{ final=tax=price*0.08+price;
}
if(type=='M')
{ final=tax=price*0.06+price;
}
if(type=='S')
{ final=tax=price*0.1+price;
}
if(type=='V')
{ final=tax=price*0.12+price;
}
if(type=='T')
{ final=tax=price*0.15+price;
}
return final;
}