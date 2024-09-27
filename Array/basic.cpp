// Array is data Stucture
// int is 4 bytes
// float is 4 bytes
// double is 8 bytes
// char is 1 bytes

#include <iostream>
using namespace std;
int main()
{

    int array[5];                             // declaration with size of 5
    int array2[8] = {1, 5, 0, 4, 3, 1, 6, 8}; // declaration and intialisation

    /**
     * Set element with index
     * Syntax :=> arrayname[index]=value
     */
    // array[0] = 5;
    // array[1] = 3;
    // array[2] = 4;
    // array[3] = 8;
    // array[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    /**
     * Access Element
     */
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < size; i++)
    // {
    //     // cout << arr[i] << endl;
    // };

    // for (int item : arr) // For Each for(datatypes variablename:array){/**Code */}
    // {
    //     // cout << item << endl;
    // }
    // int i = 0;
    // while (i < size)
    // {
    //     cout << arr[i] << endl;
    // }

    // char vowels[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> vowels[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << vowels[i] << " ";
    // }

    return 0;
}