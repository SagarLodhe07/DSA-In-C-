#include <iostream>
using namespace std;
int main()
{
    int length, breadth, Area, Perimeter;
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;

    Area = length * breadth;

 
    Perimeter = 2 * (length + breadth);

    if (Area > Perimeter)
        cout << "Area is greater than perimeter";
    else if (Area < Perimeter)
        cout << "Area is less than perimeter";
    else
        cout << "Both are equal";

    return 0;
}