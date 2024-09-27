#include <iostream>
using namespace std;

// print n to 1
void print(int a)
{
    if (a == 0)
        return;
    cout << a << endl;
    print(a - 1);
}
int main()
{
    int n = 5;
    print(n);
    return 0;
}