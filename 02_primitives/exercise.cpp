#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    // Question No 01
    /*
    Tea Information Display Write a program that declares
    variables to store the type of tea, its price per kilogram
    (float), and its rating (char). Use data types effectively and
     print them in a formatted output using escape sequences.
    */

    // string teaType = "Milk Tea";
    // float pricePerKillo = 1199.99;
    // char teaRating = 'A';

    // cout << "The " << teaType << " is" << " selling " << pricePerKillo << " per kilogram " << "\nand it's rating is " << teaRating << endl;

    // string teaType = "Green Tea";  // Type of tea
    // float pricePerKg = 1200.50;    // Price per kilogram
    // char rating = 'A';             // Rating

    // // Display tea information
    // cout << "***********************\n";
    // cout << "* Tea Information Display *\n";
    // cout << "***********************\n\n";

    // cout << "Tea Type:       \t" << teaType << "\n";
    // cout << "Price per Kg:   \t" << fixed << setprecision(2) << pricePerKg << " PKR\n";
    // cout << "Rating:         \t" << rating << "\n";

    // cout << "\n***********************\n";

    // Question No 02
    /*
    Modify Tea Prices Create a program where the user inputs a
    base price for tea. Use type casting to increase the price by
    10% and display the rounded new price using explicit casting.
    */

    // float basePrice,newPrice;

    // cout << "Enter the base price..." << endl;
    // cin >> basePrice;

    // newPrice = basePrice * 1.10;

    // int roundedPrice = (int) newPrice ;

    // cout << "The rounded price is : " << roundedPrice << endl;

    // Question No 03

    /*
    Favorite Tea Input Write a program that takes the user's
     favorite tea as input using getline and also asks how many
      cups of tea they want using cin. Display the result in a fün
       message
       */

    string favTea;
    int teaQty;

    //   User Input

    cout << "What is your favorite tea?" << endl;
    getline(cin, favTea);

    cout << "How may cups would you like to have?" << endl;
    cin >> teaQty;

    cout << "Your order is " << favTea << " and you orderd " << teaQty << " cups of tea... Thanks for comming ☺️" << endl;

    return 0;
};