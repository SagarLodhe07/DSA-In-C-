#include <iostream>
using namespace std;

int main()
{
    // while loop

    // int i = 1;
    // int n = 2;
    // while (i <= 10) /**run till condition is true */

    //  Syntax
    // while (/* condition */)
    // {
    //     /* code */
    // }

    {
        // table of 2
        // cout << n << "*" << i << "=" << n * i << endl;
        // i++;
    }

    // For loop
    /**Syntax
     * for (init-statement;  condition;  final-expression)
     * {code}
     */

    // int m;
    // cin>>m;
    // for (int i = 1; i <= m; i++)
    // {
    //     if (i%2==0)
    //     {
    //         cout<<i<<" ";
    //     }
    // }

    // int j = 5;
    // while (true)
    // {
    //     if (j % 6 == 0)
    //     {
    //         cout << j << endl;
    //         break;
    //     }
    //     j += 5;
    // }
    // Do while loop

    // int k;
    // cout<<"Enter Number: ";
    // cin >> k;
    // int sum = 0;
    // do
    // {
    //     int num;
    //     cin >> num;
    //     sum += num;
    //         k--;
    // } while (k > 0);
    // cout<<"Total is: "<<sum<<endl;

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
