#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    puts("Pointer Arithemetic with Arrays");
    int array[6] = {10, 20, 30, 40, 50, 60};
    int *ptr = (array + 0);
    cout << ptr << endl;  // Address =>0x61fef4
    cout << *ptr << endl; // value => 10
}