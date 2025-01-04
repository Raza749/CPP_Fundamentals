#include <iostream>

using namespace std;

int main()
{

    // Challenge 1: Arithmetic Operators*********
    // int teaPacks;
    // float pricePerPack, totalPrice;

    // cout << "Enter the tea packs would you like to have:" << endl;
    // cin >> teaPacks;
    // cout << "Enter the price per pack:" << endl;
    // cin >> pricePerPack;
    // totalPrice = teaPacks * pricePerPack;
    // totalPrice += totalPrice * 0.10;
    // cout << "Your total price is : " << totalPrice;

    // Challenge 2: Assignment Operators*********
    // int teaBags;

    // cout << "Enter the number of tea bags you have :" << endl;
    // cin >> teaBags;

    // if (teaBags < 20)
    // {
    //     teaBags += 10;
    // }

    // cout << "You have a total tea of tea bags: " << teaBags << endl;

    // Challenge 3: Relational and Logical Operators*****
    // int cups;
    // bool isMemberForOneYear ;

    // cout << "Enter the cups you have : " << endl;
    // cin >> cups;
    // cout << "Are you a member for more than one year? (Enter 1 for Yes, 0 for No):" << endl;
    // cin >> isMemberForOneYear ;

    // if (isMemberForOneYear  || cups > 12)
    // {
    //     cout << "You qualify for the discount offer!" << endl;
    // }
    // else
    // {
    //     cout << "You do not qualify for the discount offer." << endl;
    // }

    // Challenge 4: Bitwise Operators******
    // Stock encoding: 1 = Green, 2 = Black, 4 = Oolong
    int stock = 7; // Example stock: All teas are in stock (1 | 2 | 4 = 7)
    int teaType;

    // Display menu for tea types
    cout << "Tea Types:\n";
    cout << "1. Green Tea\n";
    cout << "2. Black Tea\n";
    cout << "4. Oolong Tea\n";
    cout << "Enter the tea type you want to check (1, 2, or 4): ";
    cin >> teaType;

    // Check if the entered tea type is valid
    if (teaType != 1 && teaType != 2 && teaType != 4)
    {
        cout << "Invalid tea type! Please enter 1, 2, or 4." << endl;
    }
    else
    {
        // Use bitwise AND to check if the tea type is in stock
        if (stock & teaType)
        {
            cout << "The selected tea type is in stock!" << endl;
        }
        else
        {
            cout << "The selected tea type is NOT in stock!" << endl;
        }

        return 0;
    }
};