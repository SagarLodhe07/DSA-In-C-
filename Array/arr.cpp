// Array is data Stucture
// int is 4 bytes
// float is 4 bytes
// double is 8 bytes
// char is 1 bytes

#include <iostream>
using namespace std;
int main()
{
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

    char vowels[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> vowels[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vowels[i] << " ";
    }

    return 0;
}