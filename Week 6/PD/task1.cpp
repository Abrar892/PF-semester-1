#include<iostream>
using namespace std;
string check(string temp, string hum);
main()
{
    string temp, hum;
    cout<<"Enter temperature (warm/cold): ";
    cin>> temp;
    cout<<"Enter humidity (dry/humid): ";
    cin>> hum;
    cout<<"Recommended activity: "<<check(temp, hum);
    return 0;
}
string check(string temp, string hum)
{
    string result;
    if(temp!="warm" && temp!="cold")
    {
        cout<<"Please enter the valid input...";
    }
    if(hum!="dry" && hum!="humid")
    {
        cout<<"Please enter the valid input...";
    }
    if(temp=="warm" && hum=="dry")
    {
        result = "Play tennis";
    }
if(temp=="warm" && hum=="humid")
    {
        result = "swim";
    }
if(temp=="cold" && hum=="dry")
    {
        result = "Play basketball";
    }
if(temp=="cold" && hum=="humid")
    {
        result = "Watch TV";
    }
return result;
}