#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, double quantity);
main()
{
    string fruit,day;
    double quantity;
    string d="Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday";
    string f="banana,apple,grapes,grapefruit,pineapple,orange,kiwi";
    cout<<"Enter the fruit name: ";
    cin>> fruit;
    cout<<"Enter the day: ";
    cin>> day;
    cout<<"Enter the quantity: ";
    cin>> quantity;
    if(fruit!=f || day!=d)
    {
        cout<<"error";
    }
    cout<< calculateFruitPrice(fruit, day, quantity);
    return 0;
}
float calculateFruitPrice(string fruit, string day, double quantity)
{
    double result, total;
    if(fruit=="banana" && (day!="Sunday" || day!="Saturday"))
    {
        total=2.50;
        result =total*quantity;
    }
    if(fruit=="apple" && (day!="Sunday" || day!="Saturday"))
    {
        total=1.20;
        result =total*quantity;
    }
    if(fruit=="orange" && (day!="Sunday" || day!="Saturday"))
    {
        total=0.85;
        result =total*quantity;
    }
    if(fruit=="grapefruit" && (day!="Sunday" || day!="Saturday"))
    {
        total=1.45;
        result =total*quantity;
    }
    if(fruit=="kiwi" && (day!="Sunday" || day!="Saturday"))
    {
        total=2.70;
        result =total*quantity;
    }
    if(fruit=="pineapple" && (day!="Sunday" || day!="Saturday"))
    {
        total=5.50;
        result =total*quantity;
    }
    if(fruit=="grapes" && (day!="Sunday" || day!="Saturday"))
    {
        total=3.85;
        result =total*quantity;
    }
    if(fruit=="banana" && (day=="Sunday" || day=="Saturday"))
    {
        total=2.70;
        result =total*quantity;
    }
    if(fruit=="apple" && (day=="Sunday" || day=="Saturday"))
    {
        total=1.25;
        result =total*quantity;
    }
    if(fruit=="orange" && (day=="Sunday" || day=="Saturday"))
    {
        total=0.90;
        result =total*quantity;
    }
    if(fruit=="grapefruit" && (day=="Sunday" || day=="Saturday"))
    {
        total=1.60;
        result =total*quantity;
    }
    if(fruit=="kiwi" && (day=="Sunday" || day=="Saturday"))
    {
        total=3;
        result =total*quantity;
    }
    if(fruit=="pineapple" && (day=="Sunday" || day=="Saturday"))
    {
        total=5.60;
        result =total*quantity;
    }
    if(fruit=="grapes" && (day=="Sunday" || day=="Saturday"))
    {
        total=4.20;
        result =total*quantity;
    }
    return result;
}