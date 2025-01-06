#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tea
{
public:
    // data member (attributes)
    string teaName;             // name of the tea
    int servings;               // Number of servings
    vector<string> ingredietns; // list of ingredients for the tea

    // Member function
    void displayTeaDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";

        for (string ingredietn : ingredietns)
        {
            cout << ingredietn << " " << endl;
        }
        cout << endl;
    };
};

int main()
{

    Tea teaOne;

   teaOne.teaName = "lemon tea";
   teaOne.servings = 3;
   teaOne.ingredietns = {"Water","Lemon","Honey","Tea"};

   teaOne.displayTeaDetails();

    return 0;
}