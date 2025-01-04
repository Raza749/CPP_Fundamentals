#include <iostream>

using namespace std;

int main()
{

    // Challenge 1: Arithmetic Operators
    int teaPacks;
    float pricePerPack, totalPrice;

    cout << "Enter the tea packs would you like to have:" << endl;
    cin >> teaPacks;
    cout << "Enter the price per pack:" << endl;
    cin >> pricePerPack;
    totalPrice = teaPacks * pricePerPack;
    totalPrice += totalPrice * 0.10;
    cout << "Your total price is : " << totalPrice;

    // Challenge 2: Assignment Operators






    return 0;
};