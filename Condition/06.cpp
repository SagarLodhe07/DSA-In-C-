#include <iostream>
using namespace std;

int main()
{
    // int num;
    // cin >> num;
    // if (num % 5 == 0 && num % 3 == 0)
    //     cout << num << " is divisible by 5 and 3";
    // else
    //     cout << num << " can not divisible by 5 and 3";

    int arr[] = {-1, 0, 1, 3, 4, 5, 6, 8, 9};
    int x = 11;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = n - 1;
    bool found = false;

    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            found = true;
            break;
        }
        else if (arr[i] + arr[j] > x)
        {
            j--;
        }
        else if (arr[i] + arr[j] < x)
        {
            i++;
        }
    }

    if (found == true)
        cout << "Element found";
    else
        cout << "Not Found";

    return 0;
}