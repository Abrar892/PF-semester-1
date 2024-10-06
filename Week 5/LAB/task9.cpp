#include <iostream>
#include<string>
using namespace std;
string timeTravel(int hours, int minutes); 
int main()
{
int hours, minutes;
cout << "Enter hours: ";
cin >> hours;
cout<<"Enter minutes:";
cin>> minutes;
if(hours>23)
{ cout<<"Please enter hours between 0 and 23";
}
if(minutes>59)
{cout<<"Please enter minutes between 0 and 59";
}
string futuretime =timeTravel(hours,minutes);
cout << "Future time after traveling 15 minutes: " <<futuretime << endl;
return 0;
} 
string timeTravel(int hours, int minutes)
{
minutes+=15;
if (minutes >= 60) {
minutes -= 60; 
hours++;       
}
if (hours >= 24) {
hours -= 24;
}
string result=to_string(hours) + ":" + to_string(minutes);
return result;
}