#include<iostream>
#include<string>
using namespace std;
string calculateCost(float budget, string category, int num);
main()
{
    float  budget;
    int num;
    string category;
    cout<<"Enter the budget: ";
    cin>> budget;
    cout<<"Enter the category (VIP/Normal): ";
    cin>> category;
    cout<<"Enter the number of people in group: ";
    cin>> num;
    if(budget<1000 || budget>1000000)
    {
        cout<<"Please enter budget between (1000-1000000).... ";
    }
    
    if(num<1 || num>200)
    {
        cout<<"Please enter number of people between (1-200)... ";
    }
    cout<< calculateCost(budget, category, num);
 return 0;
}
string calculateCost(float budget, string category, int num)
{
    string result;
    float d;
    float f;
    if(num >=1 && num <=4 && category=="VIP")
    {
 d=budget-(budget*0.75);
 f=(num*499.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
 else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
 if(num >=1 && num <=4 && category=="Normal")
    {
 d=budget-(budget*0.75);
 f=(num*249.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
 if(num >=5 && num <=9 && category=="VIP")
    {
 d=budget-(budget*0.6);
 f=(num*499.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
if(num >=5 && num <=9 && category=="Normal")
    {
 d=budget-(budget*0.6);
 f=(num*249.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
    if(num >=10 && num <=24 && category=="VIP")
    {
 d=budget-(budget*0.5);
 f=(num*499.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
    if(num >=10 && num <=24 && category=="Normal")
    {
 d=budget-(budget*0.5);
 f=(num*249.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
    if(num >=25 && num <=49 && category=="VIP")
    {
 d=budget-(budget*0.4);
 f=(num*499.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
    if(num >=25 && num <=49 && category=="Normal")
    {
 d=budget-(budget*0.4);
 f=(num*249.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
    if(num >=50 && category=="VIP")
    {
 d=budget-(budget*0.25);
 f=(num*499.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
    if(num >=50 && category=="Normal")
    {
 d=budget-(budget*0.25);
 f=(num*249.99)-d;
 if(f<0)
 {f=-f;
 if(f>0)
 result="Yes! You have " + to_string(f) + " leva left.";
 }
  else {result="Not enough money! You need " + to_string(f) + " leva.";}
    }
    return result;
}