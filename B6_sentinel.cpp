//Read positive numbers until the user types -1, and skip any other number below 1 with continue and a message. Read the number at the top of the loop body, because slide 80 shows continue skipping the update. Print the count, sum and average, or No valid numbers were entered.
//B6_sentinel.cpp
// Lab 5, Task B6: sentinel
// Name:MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int sum = 0;
    while (true)
    {
        int number;
        cout << "Enter a positive number (-1 to stop): ";
        cin >> number;
        if (number == -1)
            break;
        if (number < 0)
        {
            cout <<number << " is not a positive number, skipped." << endl;
            continue;
        }
        if (number == 0)
        {
            cout << "0 is not a positive number, skipped." << endl;
            continue;
        }

        count++;
        sum += number;
    }
    if (count > 0)
    {
        double average = sum / static_cast<double>(count);
        cout << "Count = " << count << endl;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << average << endl;
    }
    
    return 0;
}