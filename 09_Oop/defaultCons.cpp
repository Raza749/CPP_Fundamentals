#include <iostream>
#include <vector>

using namespace std;

// class
class Tea
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // Default Constructor
    Tea()
    {

        teaName = "Unknown Tea";
        servings = 1;
        ingredients = {"Water", "Tea leaves"};

        cout << "Constructor Called!" << endl;
    };

    void displayTeaDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "servings: " << servings << endl;
        cout << "Ingredients: ";

        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
    };
};

int main()
{
    Tea teaOne;

    teaOne.displayTeaDetails();

    return 0;
};
