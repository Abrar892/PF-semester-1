#include<iostream>
#include<string>
using namespace std;
string check(int examh, int examm, int studenth, int studentm);
main()
{ 
    int examh,examm,studenth,studentm;
    cout<<"Enter exam starting time (hours): ";
    cin>> examh;
    cout<<"Enter exam starting time (minutes): ";
    cin>> examm;
    cout<<"Enter student arrival time (hours): ";
    cin>> studenth;
    cout<<"Enter student arrival time (hours): ";
    cin>> studentm;
    cout<< check(examh, examm, studenth, studentm);
    return 0;
}
string check(int examh, int examm, int studenth, int studentm)
{
    int examtotal=examh*60+examm;
    int arrival=studenth*60+studentm;
    int difference=arrival-examtotal;
    string result;
    if(difference>0)
    {
        result ="Late";
    if(difference<60)
    {
        result="Late " + to_string(difference) + " minutes after start";
    }
    else
    {
        int hours= difference/60;
        int minutes= difference%60;
        result="Late " + to_string(hours) + ":" + to_string(minutes) + " after start";
    }
  }
    else if (difference==0)
    {
        result ="On time";
    }
      else
      {
            difference=-difference;
        if(difference<0)
        {
            result="On time\n " + to_string(difference) + "minutes before start";
        }
        else if (difference<60)
        {
            result ="Early";
        }
       
    else 
     { 
            int hours= difference/60;
         int minutes= difference%60;
         result="Early\n " + to_string(hours) + ":" +  to_string(minutes) + " before start";
    }
    return result;
}
}