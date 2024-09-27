#include <iostream>
using namespace std;
/**Find max number from array */
int main()
{

    int arr[] = {8, 3, 1, 5, 7, 9, 4, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    // int target = 10;//if not found
    int target = 7; // if found
    int ans = -1;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == target)
        {

            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}