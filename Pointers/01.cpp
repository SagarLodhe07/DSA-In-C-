#include <iostream>
using namespace std;
int main()
{
    int x = 2;
    cout << x << endl;
    int *p = &x;
    cout << "Address of x" << endl;
    cout << p << endl;
    cout << "Access value of x using p" << endl;
    cout << *p << endl;

    *p = 100;

    cout << "Change value of x using p" << endl;
    cout << x << endl;
}