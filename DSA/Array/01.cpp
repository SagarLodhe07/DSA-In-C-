#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 10, 15, 20, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = i+1;
    int x = 10;


    while (j < n && i < n)
    {
        if (abs(arr[i] - arr[j]) == x)
        {
            cout << "Yes";
            break;
        }
        else if (abs(arr[i] - arr[j]) > x)
        {
            i++;
        }
        else if (abs(arr[i] - arr[j]) < x)
        {
            j++;
        }
    }

    return 0;
}