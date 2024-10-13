#include<iostream>
using namespace std;
int calculateVolleyballGames(string year, int day, int week);
main()
{
    string year;
    int day, week;
    cout<<"Enter year type: ";
    cin>> year;
    cout<<"Enter number of holidays: ";
    cin>> day;
    cout<<"Enter number of weekends: ";
    cin>> week;
    cout<< calculateVolleyballGames(year, day, week);
    return 0;
} 
int calculateVolleyballGames(string year, int day, int week)
{
    int result;
    if(year=="normal")
    {
        result = (48-week)*0.75 + day*0.6 + week;
    }
    if(year=="leap")
    {
        result = ((48-week)*0.75 + day*0.6 + week)*1.15;
    }
    return result;
}