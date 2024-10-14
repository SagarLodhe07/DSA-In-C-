#include <cstdio>
#include <iostream>
using namespace std;
void process(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << endl;
    }
}
int main()
{
    puts("Pointer Arithemetic with Arrays");
    int array[3] = {10, 20, 30};
    // cout << array << endl;        // Pointer for same as array[0] index base adderess
    // cout << *array << endl;       // Dereference can posible
    // cout << *(array + 1) << endl; // Pointer for 1 index element
    // cout << &array[0] << endl;

    puts("Access with the for loop: *(array + i)");
    process(array, 3);
}