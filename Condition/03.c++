#include <iostream>
using namespace std;
int main()
{
    int selling_price, cost_price;
    cout << "Enter Selling price: ";
    cin >> selling_price;
    cout << "Enter Cost Price: ";
    cin >> cost_price;

    if (selling_price > cost_price)
        cout <<"Profit "<< selling_price - cost_price;
    else if (selling_price < cost_price)
        cout <<"Loss "<< selling_price - cost_price;

    else
        cout <<"No profit no loss";

    return 0;
}