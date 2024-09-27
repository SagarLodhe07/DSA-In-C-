#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
            arr[i] = arr[i] + 10;
        else
            arr[i] = arr[i] * 2;
    }

    for (int j = 0; j < length; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}