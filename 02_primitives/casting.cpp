#include <iostream>

using namespace std;

int main()
{

    float teaPrice = 49.99;
    // cout << teaPrice << endl;
    // int roundedPrice = (short) teaPrice; // don't use like this
    int roundedPrice = (int)teaPrice;
    int teaQty = 3;

    double totalPrice = teaQty * teaPrice;

    cout << totalPrice << endl;

    return 0;
};