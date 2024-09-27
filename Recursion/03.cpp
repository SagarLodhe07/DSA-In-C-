#include <iostream>
using namespace std;

// print n to 1
int sum(int a)
{

    if (a == 1)
        return 1;
    return a + sum(a - 1);
}
int main()
{
    int n = 100;
    cout << sum(n);
    return 0;
}