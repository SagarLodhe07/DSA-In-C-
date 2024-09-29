#include <iostream>
#include <cstdio>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    puts("Poiter 2");
    int x, y;
    x = 10;
    y = 20;
    cout << "Value of: " << x << endl;
    cout << "Value of: " << y << endl;
    int *p1 = &x;
    int *p2 = &y;
    swap(p1, p2);
    puts("After Swap =>");
    cout << "Value of: " << x << endl;
    cout << "Value of: " << y << endl;
}