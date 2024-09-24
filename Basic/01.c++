#include <iostream>
using namespace std;
int main()
{
    float rate, principal, time, SI;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter time: ";
    cin >> time;
    cout << "Enter Principal: ";
    cin >> principal;

    SI = (rate * principal * time) / 100;
    cout << "Interest is: " << SI<<endl;
    return 0;
}