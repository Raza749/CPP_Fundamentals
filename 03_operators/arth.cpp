#include <iostream>

using namespace std;

int main()
{

    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of cups..." << endl;
    cin >> cups;
    cout << "Enter the price per cup..." << endl;
    cin >> pricePerCup;

    // Total Price
    totalPrice = cups * pricePerCup;

    // Apply 5% dicount if total price is above 100
    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price is " << discountedPrice << endl;
    }
    else
    {
        cout << "The total price is : " << totalPrice << endl;
    };

    return 0;
};