#include <iostream>
using namespace std;

int main()
{ // Pointer   i                           j
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int length = sizeof(a) / sizeof(a[0]);
    int i = 0, j = length - 1;

    while (i < j)
    {

        // Swap
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    for (int l = 0; l < length; l++)
    {
        cout << a[l] << " ";
    }

    return 0;
}