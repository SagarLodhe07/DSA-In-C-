#include <iostream>
using namespace std;
int main()
{

    int percentage;
    cout << "Enter Percentage: ";
    cin >> percentage;

    if (percentage >= 81 && percentage <= 100)
        cout << "Very good";
    else if (percentage >= 61)
        cout << "Good";
    else if (percentage >= 41)
        cout << "Average";
    else 
        cout << "Fail";

    return 0;
}