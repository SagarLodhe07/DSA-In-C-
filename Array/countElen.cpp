#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 1, 8, 3, 4, 7};
    int countNum = 0;
    int target = 3;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > target)
            countNum++;
    }

    cout << countNum;

    return 0;
}