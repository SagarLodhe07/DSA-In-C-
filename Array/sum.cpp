#include <iostream>
using namespace std;
/**Calculate sum all element in given array */

int sumOfElement(int arr[])
{

    int sum = 0;
    // int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
        // cout<<sum<<" ";
    }
    return sum;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int a = 3;
    float n = 3.0;
    cout << sizeof(a) << endl;
    cout << sizeof(n) << endl;

    int sum = sumOfElement(array);
    cout << sum << " ";
    return 0;
}