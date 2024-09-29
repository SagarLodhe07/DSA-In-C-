#include <iostream>
#include <string>
using namespace std;

int countVowels(string w)
{
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < w.length(); i++)
    {
        // if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u' || w[i] == 'A' || w[i] == 'E' || w[i] == 'I' || w[i] == 'O' || w[i] == 'U')
        if (vowels.find(w[i]) != string::npos)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string word;
    cout << "Enter Word: ";
    getline(cin, word);
    cout << countVowels(word);
}