#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int length = sizeof(a) / sizeof(a[0]);
    int b[length];

    for (int i = 0; i < length; i++)
    {
        /**1st way */
        // for (int j = 0; j < (length - i); j++)
        // {
        //     b[j] = a[i];
        // }
        /**2nd way */
        b[i] = a[length - i - 1];
    }
    for (int l = 0; l < length; l++)
    {
        cout << b[l] << " ";
    }

    return 0;
}