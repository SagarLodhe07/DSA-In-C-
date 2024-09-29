#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string name = "Sagar";
    string lastname = "lodhe";

    cout << name << endl;
    name.push_back('H');
    cout << name << endl;
    name.append(lastname);
    cout << name << endl;

    /**
     * reverse()
     * to_string(var)
     */

    int x= 35541547941;
    string ct = to_string(x);
    cout<<ct.length()<<endl;
    cout<<to_string(x)<<endl;

    reverse(name.begin(), name.end());
    cout << name << endl;
}