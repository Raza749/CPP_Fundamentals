#include <iostream>

using namespace std;

int main()
{

    int cups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of tea cups" << endl;
    cin >> cups;

    totalPrice = cups * pricePerCup;

    if (cups > 20)
    {
        discount = 0.20;
    }
    else if (cups >= 10 && cups <= 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0;
    }

    // totalPrice = totalPrice - (totalPrice * discount);
    totalPrice -= totalPrice * discount;

    cout << "Total price after discount is :" << totalPrice << endl;

    return 0;
};