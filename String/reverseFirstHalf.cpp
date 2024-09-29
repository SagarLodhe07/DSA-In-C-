#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string name = "Raghav";
    // output = gaRhav

    int i, j;
    i = 0;
    int n = name.length() / 2;
    j = n - 1;
    // reverse(name.begin(), name.begin() + n/2);
    while (i < j)
    {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }
    cout << name;
}