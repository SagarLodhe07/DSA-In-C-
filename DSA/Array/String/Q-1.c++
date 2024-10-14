// Remove occurence a from "abcax"

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string removeOcurrence(string word,char c)
{
    string result;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] != c)
        {

            result.push_back(word[i]);
        }
    }
    return result;
}

int main()
{
    puts("Remove Occurences");
    string word = "sagar";
    char ch = 'a';
    string res = removeOcurrence(word,ch);
    cout << "Result " << res << endl;
    return 0;
}