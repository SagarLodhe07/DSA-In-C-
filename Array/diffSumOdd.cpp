#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 1, 8, 3, 4, 7};
    int difference;
    int sum_of_even_index = 0;
    int sum_of_odd_index = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
            sum_of_even_index += arr[i];
        else
            sum_of_odd_index += arr[i];
    }

    cout << sum_of_even_index<<endl;
    cout << sum_of_odd_index<<endl;
    difference = sum_of_even_index - sum_of_odd_index;
    cout << "Difference is: " << difference;

    return 0;
}