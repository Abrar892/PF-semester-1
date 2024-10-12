#include<iostream>
#include<string>
using namespace std;
string  calavrage(float marksE, float marksM, float marksC, float marksS, float marksB);
main()
{
    float marksE, marksM, marksC, marksS, marksB;
    string name;
    cout<<"Enter student name: ";
    cin>> name;
    cout<<"Enter marks for English: ";
    cin>> marksE;
    cout<<"Enter marks for Maths: ";
    cin>> marksM;
    cout<<"Enter marks for Chemistry: ";
    cin>> marksC;
    cout<<"Enter marks for Social Science: ";
    cin>> marksS;
    cout<<"Enter marks for Biology: ";
    cin>> marksB;
    if(marksE>100 || marksM>100 || marksC>100 || marksS>100 || marksB>100)
     {cout<<"Please enter marks less than 100...";}
     cout<<"Student Name: "<<name<<endl;
    cout<< calavrage(marksE, marksM, marksC, marksS, marksB);
    return 0;
}
string calavrage(float marksE, float marksM, float marksC, float marksS, float marksB)
{
    string result;
    float perc=((marksE+marksM+marksC+marksS+marksB)/500)*100;
    if(perc>=90 && perc<=100)
    {
        result= "Percentage: " + to_string(perc) +  "Grade : A+"; 
    }
    if(perc>=80 && perc<90)
    {
        result= "Percentage: " + to_string(perc) + "Grade : A"; 
    }
    if(perc>=70 && perc<80)
   {
        result= "Percentage: " + to_string(perc) + "Grade : B+"; 
    }
    if(perc>=60 && perc<70)
    {
        result= "Percentage: " + to_string(perc) + "Grade : B"; 
    }
if(perc>=50 && perc<60)
    {
        result= "Percentage: " + to_string(perc) +  "Grade : C"; 
    }
    if(perc>=40 && perc<50)
    {
        result= "Percentage: " + to_string(perc) +  "Grade : D"; 
    }
if(perc<40)
    {
        result= "Percentage: " + to_string(perc) +  "Grade : F"; 
    }
     return result;

}