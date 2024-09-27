#include <iostream>
using namespace std;
int main()
{

    int Ram, Shyam, Ajay;
    cout << "Enter Ram Age: ";
    cin >> Ram;
    cout << "Enter Shyam Age: ";
    cin >> Shyam;
    cout << "Enter Ajay Age: ";
    cin >> Ajay;

    if (Ram < Shyam)
    {
        if (Ram < Ajay)
            cout << "Ram is youngest";
        else
            cout << "Ajay is youngest";
    }
    else
    {
        if (Shyam < Ajay)
            cout << "Shyam is youngest";
        else
            cout << "Ajay is youngest";
    }

    return 0;
}