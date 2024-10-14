#include <iostream>
#include <vector>
using namespace std;
void zeroOneSort(vector<int> &a)
{

    int zeros = 0;
    for (int ele : a)
    {
        if (ele == 0)
            zeros++;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (i < zeros)
            a[i] = 0;
        else
            a[i] = 1;
    }
}

void sortVector(vector<int> &a)
{
    int n = a.size();
    int j = n - 1;

    int i = 0;
    while (i > j)
    {

        if (a[i] > a[j])
        {
            a[j]=0;
            a[i]=1;
            i++;
            j--;
        }
    }
}
int main()
{

    vector<int> a = {1, 1, 0, 0, 1, 0, 1, 0};
    // zeroOneSort(a);
    sortVector(a);

    for (int j = 0; j < a.size(); j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}

// int length = sizeof(a) / sizeof(a[0]);
// int j = length - 1;
// int i = 0;

// while (i > j)
// {
//     if (a[i] < a[j])
//     {

//         int temp = a[j];
//         a[j] = a[i];
//         a[i] = temp;
//         i++;
//         j--;
//     }
// }