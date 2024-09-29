#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void compute1stAndLastIndex(string str, char c, int *pf, int *pl)
{

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == c)
        {
            *pf = i;
            break;
        }
    }
    for (int j = str.size() - 1; j >= 0; j--)
    {
        if (str[j] == c)
        {
            *pl = j;
            break;
        }
    }
}
int main()
{
    puts("Poiter 2");
    string word = "aaabac";
    char c = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;
    compute1stAndLastIndex(word, c, pf, pl);

    puts("Index is: ");
    cout << first << endl;
    cout << last << endl;
    puts("Address of index: ");
    cout << pf << " " << pl << " " << endl;
    puts("index is: ");
    cout << *pf << " " << *pl << " " << endl;
}