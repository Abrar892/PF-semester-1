#include<iostream>
using namespace std;
string find(int day, string month);
main()
{
    int day;
    string month;
    cout<<"Enter the day of birth: ";
    cin>> day;
    cout<<"Enter the month of birth: ";
    cin>> month;
    cout<<"Zodaic Sign: "<< find(day, month);
    return 0;
}
string find(int day, string month)
{
    string result;
    if((day>=21 && day<=31 && month=="March") || (day>=1 && day<=19 && month=="April"))
    {
        result= "Aries";
    }
   else if((day>=1 && day<=20 && month=="May") || (day>=20 && day<=30 && month=="April"))
    {
        result= "Taurus";
    }
    else if((day>=21 && day<=31 && month=="May") || (day>=1 && day<=20 && month=="June"))
    {
        result= "Gemini";
    }
    else if((day>=21 && day<=30 && month=="June") || (day>=1 && day<=22 && month=="July"))
    {
        result= "Cancer";
    }
    else if((day>=23 && day<=31 && month=="July") || (day>=1 && day<=22 && month=="August"))
    {
        result= "Leo";
    }
    else if((day>=23 && day<=31 && month=="August") || (day>=1 && day<=22 && month=="September"))
    {
        result= "Virgo";
    }
    else if((day>=23 && day<=30 && month=="September") || (day>=1 && day<=22 && month=="October"))
    {
        result= "Libra";
    }
    else if((day>=23 && day<=31 && month=="October") || (day>=1 && day<=21 && month=="November"))
    {
        result= "Scorpio";
    }
    else if((day>=22 && day<=30 && month=="November") || (day>=1 && day<=21 && month=="December"))
    {
        result= "Sagittarius";
    }
    else if((day>=22 && day<=31 && month=="December") || (day>=1 && day<=19 && month=="January"))
    {
        result= "Capricorn";
    }
    else if((day>=20 && day<=31 && month=="January") || (day>=1 && day<=18 && month=="February"))
    {
        result= "Aquarius";
    }
    else if((day>=19 && day<=28 && month=="February") || (day>=1 && day<=20 && month=="Match"))
    {
        result= "Pisces";
    }
    return result;
}