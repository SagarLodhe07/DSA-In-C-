#include <iostream>
#include<cstdio>

using namespace std;
int main()
{
    int x = 2;
    float y = 2.3;

    int *p = &x;
    float *pf = &y;
    puts("Address of x");
    cout << &x << endl;
    cout << p << endl;
    cout << "Value of Y " << *pf << endl; // Dereference operator
 
    cout << &y << endl; // address of x variable
}