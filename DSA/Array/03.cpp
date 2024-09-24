#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {2,2,2};
    int i, j, n, x = 4, countPair = 0;
    n = 3;
    j = n - 1;
    i = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            i++;
            j--;
            countPair++;
        }
        else if((arr[i] + arr[j] < x))
        {
            i++;
        }
        else{
            j--;
        }
    }
    cout << countPair;
    return 0;
}