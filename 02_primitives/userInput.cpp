#include <iostream>
#include <string>

using namespace std;

int main()
{

    // User input
    string userTea;
    int teaQty;

    cout << "What would you like to order?\n";
    getline(cin, userTea);

    // Ask for Quantity
    cout << "How many cups of " << userTea << "would you like to have?";
    cin >> teaQty;

    cout << "Your order's tea is " << userTea << endl;
    cout << "Your Quantity is " << teaQty << endl;

    return 0;
};