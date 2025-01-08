#include <iostream>
#include <vector>

using namespace std;

// class
class Machine
{
private:
    string name;
    double price;
    vector<string> categories;

public:
    // Default Constructor
    Machine()
    {
        name = "Unknown name";
        price = 1899.99;
        categories = {"Mac", "Windows", "Linux"};
    }

    // Parameterized Constructor
    Machine(string new_name, double new_price, vector<string> cate)
    {
        name = new_name;
        price = new_price;
        categories = cate;
    }

    // Getter for name
    string getName()
    {
        return name;
    }

    // Setter for name
    void setName(string new_name)
    {
        name = new_name;
    }

    // Getter for price
    double getPrice()
    {
        return price; // Fixed typo from "retrun" to "return"
    }

    // Setter for price
    void setPrice(double new_price) // Corrected return type to void
    {
        price = new_price; // Fixed variable reassignment
    }

    // Getter for categories
    vector<string> getCategories()
    {
        return categories;
    }

    // Setter for categories
    void setCategories(vector<string> cate)
    {
        categories = cate;
    }

    // Display machine details
    void displayDetails()
    {
        cout << "Machine name: " << name << endl;
        cout << "Machine price: " << price << endl;
        cout << "Categories: ";

        for (string cat : categories)
        {
            cout << cat << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Using default constructor
    Machine machineOne;

    // Modifying the name using the setter
    machineOne.setName("Macbook Pro 2020");

    // Displaying details of the machine
    machineOne.displayDetails();

    return 0;
}
