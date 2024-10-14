#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    puts("Pointer Arithemetic with Arrays");
    int array[2] = {1, 3};

    int *p1 = &array[0];

    // cout << (*p1)++<<endl;
    // cout << *++p1 << endl; // move pointer first than use deference
    cout << *p1++ << endl; // use ptr first than inc 
    cout << ++*p1 << endl; // first dereference than inc dereference value
    cout << array[0] << " " << array[1] << endl;
}