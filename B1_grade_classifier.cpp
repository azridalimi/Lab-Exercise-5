// B1-Read a score and print its grade and description (slides 53, 55).
// Use an if/else if chain for the grade: above 90 is A, above 75 B, above 60 C, above 50 D, else F. Use a switch for the description, reject scores outside 0 to 100, and test 91, 90, 51, 50 and -5.
// Name:MUHAMMAD AZRI BIN AHMAD DALIMI  Matric: A26CS0211

#include <iostream>
using namespace std;


int main () {
    int score;
    cout << "Enter the score (0 to 100): ";
    cin>>score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid score.";
        return 0;
    }

    char grade;
    if (score > 90)
        grade = 'A';
    else if (score > 75)
        grade = 'B';
    else if (score > 60)
        grade = 'C';
    else if (score > 50)
        grade = 'D';
    else
        grade = 'F';

    cout << "Grade: " << grade << '\n';

    switch (grade)
    {
        case 'A':
            cout << "Excellent!";
            break;
        case 'B':
            cout << "Very good!";
            break;
        case 'C':
            cout << "Good.";
            break;
        case 'D':
            cout << "Pass.";
            break;
        case 'F':
            cout << "Fail.";
            break;
    }
}