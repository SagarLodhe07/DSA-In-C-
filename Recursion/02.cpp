#include <iostream>
using namespace std;

/** 1st Way */
// print  1 to n
void print(int a, int b)
{
    if (a > b) //base case
        return;
    cout << a << endl;//work
    print(a + 1, b);//call
}
int main()
{
    int n = 10; 
    print(1, n);
    return 0;
}
/**
 * Imp Recursion
 * 2nd Way */
// print  1 to n
// void print(int a)
// {
//     if (a == 0)
//         return;
//     print(a - 1);
//     cout << a << endl;

// }
// int main()
// {
//     int n = 5;
//     print(n);
//     return 0;
// }