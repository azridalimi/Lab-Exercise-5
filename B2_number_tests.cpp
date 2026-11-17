// B2_number_tests.cpp
// Lab 5, Task B2: number tests 
// Name:MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0)
        cout <<number << " is positive";
    else
        cout << number << " is negative";
    cout << endl;

    if (number % 2 == 0)
        cout << number << " is even";
    else
        cout << number << " is odd";
    cout << endl;

    int year;
    cout << "Enter a year(1 or more): ";
    cin >> year;
    if (year / 4 == 0)
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";

    return 0;
}
