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
    int cups;
    bool isMemberForOneYear ;

    cout << "Enter the cups you have : " << endl;
    cin >> cups;
    cout << "Are you a member for more than one year? (Enter 1 for Yes, 0 for No):" << endl;
    cin >> isMemberForOneYear ;

    if (isMemberForOneYear  || cups > 12)
    {
        cout << "You qualify for the discount offer!" << endl;
    }
    else
    {
        cout << "You do not qualify for the discount offer." << endl;
    }

    return 0;
};