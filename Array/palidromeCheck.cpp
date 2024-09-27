#include <iostream>
using namespace std;

int main()
{ 
    // Pointer i                 j
    int a[] = {1, 2, 3, 4, 3, 2, 1};

    int length = sizeof(a) / sizeof(a[0]);
    int i = 0, j = length - 1;
    bool ans = false;
    

    while (i < j)
    {

        if (a[i] == a[j])
        {
            i++;
            j--;
            ans = true;
        }
    }

    cout << ans;
    return 0;
}