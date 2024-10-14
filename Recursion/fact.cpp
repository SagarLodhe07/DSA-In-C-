#include <iostream>
#include<cstdio>
using namespace std;

int fact(int n)
{

    if (n <= 1)
        return n;
    return n * fact(n - 1);
}
int main()
{

    puts("Factorial: ");
    int n= 4;
    puts("Enter Number: ");
    // cin>>n;
    int result = fact(n);
    cout << "factorial of " << n << " is " << result<<endl;
}