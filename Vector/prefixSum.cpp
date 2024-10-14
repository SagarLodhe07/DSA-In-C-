#include <iostream>
#include <vector>
using namespace std;

void runningSum(vector<int> &v){
    for (int i = 1; i < v.size(); i++) {
        v[i] += v[i - 1];
    }
}
int main()
{
    // int array[] = {1, 2, 3, 4, 5};
    // /** Output     1  3  6  10 15 */

    int size;
    cout<<"Enter lengt of vector: ";
    cin >> size;
    vector<int>v;
    for (int k = 0; k < size; k++)
    {
        int Elm;
        cin >> Elm;
        v.push_back(Elm);
    }

    runningSum(v);
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }

    return 0;
}