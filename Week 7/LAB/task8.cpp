#include<iostream>
using namespace std;
int calculate(int age, int wmPrice, int tPrice);
main()
{
    int age, wmPrice, tPrice;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> wmPrice;
    cout << "Enter the price of each toy: ";
    cin >> tPrice;
    int result = calculate(age, wmPrice, tPrice);
    if (result >= 0)
    {
        cout << "Yes! " <<endl<< result << endl; 
    }
    else
    {
        cout << "No! " <<endl<< -result << endl;  
    }
    return 0;
}
int calculate(int age, int wmPrice, int tPrice)
{
    int totalMoney = 0;
    int toyCount = 0;
    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)  
        {
            totalMoney += (10 * (i / 2))-1;  
            
        }
        else  
        {
            toyCount++;
        }
    }
    totalMoney += toyCount * tPrice;
    int remaining = totalMoney - wmPrice;
    return remaining;  
}
