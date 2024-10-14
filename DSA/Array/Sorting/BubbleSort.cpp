#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &vec)
{

    // cout<<vec.size();

    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] > vec[j])
            {
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}

int main()
{
    puts("Bubble Sort");
    int n;
    cout << "Enter length on array: ";
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int Elm;
        cin >> Elm;
        vec.push_back(Elm);
    }

    bubbleSort(vec);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
}