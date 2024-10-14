#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << vec.at(0) << endl;

    vec.resize(10);
    cout << vec.size() << endl;
    vec.push_back(100); // add element at last index

    for (int l = 0; l < vec.size(); l++)
    {
        cout << vec[l] << " ";
    }

    cout<<endl;
    vec.pop_back(); // Remove last element from last index
    for (int l = 0; l < vec.size(); l++)
    {
        cout << vec[l] << " ";
    }
    return 0;
}