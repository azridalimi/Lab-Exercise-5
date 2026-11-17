//B3_table_sum.cpp
// Lab 5, Task B3: table sum
// Name:MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
using namespace std;
int main()
{
    int NumOfTables;
    cout << "Enter a number for its tables: ";
    cin >> NumOfTables;
    for (int i = 1; i <= 10; i++)
    {
        cout << NumOfTables << "x" << i << "=" << i * NumOfTables << endl;
    }
    int N;
    cout << "How many numbers ? ";
    cin >> N;
    int i = 0;
    int sum = 0;
    while (i < N)
    {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
        i++;
        
    }
    double average = sum / static_cast<double>(N);
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    return 0;
}