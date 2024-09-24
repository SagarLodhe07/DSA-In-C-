#include <iostream>
using namespace std;

int main()
{

    int i = 0;
    int j = 0;
    int k = 0;

    int arr1[] = {1, 2, 6, 4, 8};
    int arr2[] = {3, 5, 7, 9, 10, 12, 15, 13, 47};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int result[m + n];
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }
    for (int i = 0; i < (m + n); i++)
    {
        cout << result[i] << " " << endl;
    }

    return 0;
}