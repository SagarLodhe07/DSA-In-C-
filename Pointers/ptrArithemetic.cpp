#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    puts("Pointer Arithemetic");
    int x = 20;
    double y = 2.5;

    int *p1 = &x;
    double *p2 = &y;
    puts("Size of : x & y in bytes ");
    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;

    cout << p1 << " " << (p1 + 1)<<endl;  // 1 = 1 unit of bytes 
    cout << p2 << " " << (p2 + 1)<<endl;  // 1 = 1 unit of bytes 
}