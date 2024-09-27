// Target sum

#include <iostream>
using namespace std;

void two_sum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Target sum found " << i << " " << j<<endl;
                return;
            }
        }
    }
    cout << "No target sum found at indices:" << endl;
}

int main()
{

    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    two_sum(arr, n, target);
    return 0;
}