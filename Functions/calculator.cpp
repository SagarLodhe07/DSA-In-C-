#include <iostream>
#include <cmath>
using namespace std;

int calc(int a, char op, int b)
{
    switch (op)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '/':
        return a / b;
        break;
    case '*':
        return a * b;
        break;
    default:
        break;
    }
}

int main()
{
    int x, y;
    char op;
    cout << "Enter 1st number: ";
    cin >> x;
    cout << "Select Operator(+, -, /, *): ";
    cin >> op;
    cout << "Enter 2nd number: ";
    cin >> y;
    cout << "= " << calc(x, op, y) << endl;

    return 0;
}