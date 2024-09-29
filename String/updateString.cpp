#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter word: ";
    getline(cin, word);

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] % 2 == 0)
        {
            word[i] = 'a';
        }
    }
    cout<<word;
}