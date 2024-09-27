#include <iostream>
#include <cmath>

using namespace std;
/**Find Second largest number from array */
int main()
{

    int arr[] = {8, 3, 1, 5, 7, 9, 4, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        // if (arr[i] > max)
        //     max = arr[i];
        mx = max(mx, arr[i]);
    }
    int smx = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != mx)
            smx = max(smx, arr[i]);
    }
    cout << "First Largest: " << mx;
    cout << "Second Largest: " << smx;
    return 0;
}