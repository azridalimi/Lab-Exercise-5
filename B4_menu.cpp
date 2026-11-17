//B4_menu.cpp
// Lab 5, Task B4: menu
// Name:MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0;
    cout << "=== UTM Cafe ===" << endl;
    cout << "1. Nasi Lemak RM4" << endl;
    cout << "2. Mee Goreng RM5" << endl;
    cout << "3. Roti Canai RM2" << endl;
    cout << "4. Teh Tarik RM3" << endl;
    cout << "5. Exit" << endl;
    while (true)
    {
        int choice;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        if (choice == 1)
        {
            sum += 4;
            cout << "Added Nasi Lemak" << endl;
        }
        else if (choice == 2)
        {
            sum += 5;
            cout << "Added Mee Goreng" << endl;
        }
        else if (choice == 3)
        {
            sum += 2;
            cout << "Added Roti Canai" << endl;
        }
        else if (choice == 4)
        {
            sum += 3;
            cout << "Added Teh Tarik" << endl;
        }
        else if (choice == 5)
        {
            break;
        }
        else
            cout << "Invalid choice. Please enter 1-5 : " << endl;
    }
    cout << "Total to pay: RM" << sum << endl;
    return 0;
}