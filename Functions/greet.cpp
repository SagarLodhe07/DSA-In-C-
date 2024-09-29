#include <iostream>
using namespace std;
void greet(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old " << endl;
}

int main()
{

    string name;
    int age;
    cout << "Enter Name: ";
    cin >> name >> age;
    greet(name, age);
    return 0;
}
