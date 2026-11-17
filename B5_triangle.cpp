//Print a right-angle triangle of * with nested for loops. Open B5_loop_trace.cpp (slide 94) but do not compile it yet. Predict in README.md the outer count, the inner count (in total) and the output, then run it.
//B5_triangle.cpp
// Lab 5, Task B5: triangle
// Name:MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}