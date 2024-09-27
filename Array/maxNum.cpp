#include <iostream>
using namespace std;
/**Find max number from array */
int main()
{

    int arr[] = {8, 3, 1, 5, 7, 9, 4, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
    return 0;
}