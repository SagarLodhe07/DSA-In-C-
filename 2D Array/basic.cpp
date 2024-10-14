#include <iostream>
using namespace std;
int main()
{

    // int arrayName[rows][column];

    //     Row Index
    //    0     1     2
    //  __________________
    // |  6  |  1  |  2  |   0    Column Index
    // |_____|_____|_____|
    // |  4  |  3  |  5  |   1
    // |_____|_____|_____|

    int array[2][3];

    array[0][0] = 6;
    array[0][1] = 1;
    array[0][2] = 2;
    array[1][0] = 4;
    array[1][1] = 3;
    array[1][2] = 5;

    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << array[i][k] << " ";
        }
        cout << endl;
    }

    return 0;
}
/**
 * Transpose of matrix
        6 4
        1 3
        2 5
 */