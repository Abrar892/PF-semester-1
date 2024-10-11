#include<iostream>
using namespace std;
float discount(string day,string month,float amount);
main()
{
string day,month;
float amount;
cout<<"Enter Purchase day: ";
cin>> day;
cout<<"Enter Purchase month: ";
cin>> month;
cout<<"Enter Purchase amount: ";
cin>> amount;
cout<<"Payable amount after discount: "<< discount(day,month,amount);
return 0;
}
float discount(string day,string month,float amount)
{
float d;
if(day=="Sunday" && month=="October")
{
d=amount-(amount*0.1);
}
if(day=="Sunday" && month!="October")
{
d=amount-(amount*0.05);
}
if(day!="Sunday" || month=="October")
{
d=amount;
}

return d;
}
