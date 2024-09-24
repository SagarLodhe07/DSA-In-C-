#include <iostream>
using namespace std;

// Swap number/value
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_without_variable(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{

    int x = 4;
    int y = 8;
    cout << x << " " << y << endl;
    // swap(x, y);
    swap_without_variable(x,y);
    cout << "After Swap " << x << " " << y << endl;
    return 0;
}