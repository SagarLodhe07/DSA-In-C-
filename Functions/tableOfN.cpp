#include <iostream>
using namespace std;
void table(int n)
{
    int i = 1;
    cout << "Table of " << n << endl;
    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
}

int main()
{
    int n;
    cout << "Enter number for table: ";
    cin >> n;
    cout<<endl;
    table(n);
}