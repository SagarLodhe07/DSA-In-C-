#include <iostream>
#include <cstdio>
using namespace std;

int fib(int n) // 7


{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main()
{

    puts("Fibonacci number: ");
    int n = 3;
    // cin>>n;
    int result = fib(n);
    cout << "fibonacci number of " << n << " is " << result << endl;
}
// Index 0 1 2 3 4 5 6 7  8   9
// fib = 0,1,1,2,3,5,8,13,21,34