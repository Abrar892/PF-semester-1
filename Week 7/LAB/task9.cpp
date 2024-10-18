#include <iostream>
using namespace std;

int calculate(int money, int year);

int main() {
    int money, year;
    
    cout << "Enter Money: ";
    cin >> money;
    
    cout << "Enter Year: ";
    cin >> year;

    int result = calculate(money, year);
    if (result >= 0) {
        cout << "Yes! He will live a carefree life and will have " << result << " dollars left." << endl;
    } else {
        cout << "He will need " << -result << " dollars to survive." << endl;
    }
return 0;
}
int calculate(int money, int year) 
{
    int totalSpent = 0;
    for (int currentYear = 1800; currentYear <= year; currentYear++) {
        int age = currentYear - 1800 + 18; 
        
        if (currentYear % 2 == 0)
         { 
            totalSpent += 12000; 
        } else { 
            totalSpent += (12000 + 50 * age);
        }
    }

    return money - totalSpent; 
}
