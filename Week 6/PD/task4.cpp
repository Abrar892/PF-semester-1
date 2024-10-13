#include<iostream>
#include<string>
using namespace std;
string cell(char service, char time, float m);
main()
{
    char service, time;
    float m;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>> service;
    if(service=='p' || service=='P')
    {
        cout<<"Enter the timr of call (D/d for day, N/n for night): ";
        cin>> time;
        if(time!='N' && time!='n' && time!='D'&& time!='d')
        {
            cout<<"Error! Please enter a valid input.."<<endl;
        }
    }
    cout<<"Enter the number of minutes used: ";
    cin>> m;
    if(service!='p' && service!='P' && service!='R' && service!='r')
    {
        cout<<"Error! Please enter a valid input.."<<endl;
    }
    cout<< cell(service, time, m);
    return 0;
}
string cell(char service, char time, float m)
{
    string result;
    float bill;
    float total;
    if(service=='r' || service=='R')
    {
        total=bill=10;
        if(m>50)
        {
            total=bill+(m-50)*0.20;
        }
        result="Service Type : Regular\nTotal minutes used: " + to_string(m) + "\nAmount due: $" + to_string(total);
    }
    else if (service == 'p' || service == 'P')
    {
        total=bill= 25; 

        if (time == 'D' || time == 'd')
        {
            if (m>75)
            {
                total=bill+(m-75)*0.10;
            }
             result="Service Type : Premium\nTotal minutes used: " + to_string(m) + "\nAmount due: $" + to_string(total);
        }
    
    else if (time == 'N' || time == 'n')
    
        total=bill=25;
            if (m > 100) {
                total=bill+(m- 100) * 0.05;
            }
             result="Service Type : Premium\nTotal minutes used: " + to_string(m) + "\nAmount due: $" + to_string(total);
    }
    return result;
}