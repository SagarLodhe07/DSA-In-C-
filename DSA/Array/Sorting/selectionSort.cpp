#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

void selectionSort(vector<int> &vec)
{
    int n = vec.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            
        }
    }
}

int main()
{
    puts("Selection Sort");
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

    selectionSort(vec);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
}