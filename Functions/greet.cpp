#include <iostream>
using namespace std;
void greet(string name)
{
    cout << "Hello " << name << endl;
}

int main()
{

    string name;
    cout << "Enter Name: ";
    cin >> name;
    greet(name);
    return 0;
}