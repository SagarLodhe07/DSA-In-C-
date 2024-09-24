#include <iostream>
using namespace std;
int main()
{

    float r, V;
    cout << "Enter radius: ";
    cin >> r;

    V = (4.0 / 3.0) *  3.141592 * r * r * r;
    cout << "Vol of sphere is: " << V;
    // V=4/3πr3
    return 0;
}