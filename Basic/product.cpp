#include <iostream>
using namespace std;
int main()
{
    int x, y, z, product;
    cout << "Enter 1st Number: ";
    cin >> x;
    cout << "Enter 2nd Number: ";
    cin >> y;
    cout << "Enter 3rd Number: ";
    cin >> z;

    product = x * y * z;
    cout << "Product of these numbers is: " << product;
    return 0;
}