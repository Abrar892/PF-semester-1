#include<iostream>
#include<string>
using namespace std;
string prices(string month, int stay);
main()
{
string month,m;
m="May,June,August,September,October";
int stay;
cout<<"Enter the Month (May, June, August, September, October): ";
cin>> month;
cout<<"Enter the number of stays: ";
cin>> stay;
if(month!=m)
{
    cout<<"Please enter the required month... ";
}
cout<< prices(month, stay);
return 0;
}
string prices(string month, int stay)
{
    string result;
    float total,f;
    if(stay>7 && stay<14 && (month=="May" || month=="October"))
    {
        total=(stay*50)-(stay*50*0.05);
        f=stay*65;
        result = "Studio : $" + to_string(total) + "\nAppartment : $" + to_string(f);
    }
    if(stay<7 && (month=="May" || month=="October"))
    {
        total=(stay*50);
        f=stay*65;
        result = "Studio : $" + to_string(total) + "\nAppartment : $" + to_string(f);
    }
    if(stay>14 && (month=="May" || month=="October"))
    {
        total=(stay*50)-(stay*50*0.3);
        f=(stay*65)-(stay*65*0.1);
        result = "Studio : $" + to_string(total) + "\nAppartment : $" + to_string(f);
    }
    if(stay>14 && (month=="June" || month=="September"))
    {
        total=(stay*75.20)-(stay*75.20*0.2);
        f=(stay*68.70)-(stay*68.70*0.1);
        result = "Studio : $" + to_string(total) + "\nAppartment : $" + to_string(f);
    }
    if(stay<=14 && (month=="June" || month=="September"))
    {
        total=(stay*75.20);
        f=(stay*68.70);
        result = "Studio : $" + to_string(total) + "\nAppartment : $" + to_string(f);
    }
    if(stay>14 && (month=="July" || month=="August"))
    {
        total=stay*76;
        f=(stay*77)-(stay*77*0.1);
        result = "Studio : $" + to_string(total) + "\nAppartment : $" + to_string(f);
    }
    if(stay<=14 && (month=="July" || month=="August"))
    {
        total=stay*76;
        f=stay*77;
        result = "Studio : $" + to_string(total) + "\nAppartment : $" + to_string(f);
    }
    return result;
}