#include <iostream>
#include <vector>
// #include <string>

using namespace std;

// class
class User
{
public:
    string *fName;
    int age;
    vector<string> skills;

    // Parameter Constructor
    User(string name, int age, vector<string> skills)
    {
        fName = new string(name);
        this->age = age;
        this->skills = skills;

        cout << "Parameter constuctor called...." << endl;
    }

    // Destructor
    ~User()
    {
        delete fName;
        cout << "Destructor called...." << endl;
    };

    // Copy constructor
    User(const User &other)
    {
        fName = new string(*other.fName);
        age = other.age;
        skills = other.skills;
        cout << "Copy contructor called ..." << endl;
    };

    void displayUserData()
    {
        cout << "User's full name: " << *fName << endl;
        cout << "User's age: " << age << endl;
        cout << "User's skills: ";

        for (string skill : skills)
        {
            cout << skill << " " << endl;
        }
    };
};

int main()
{

    User userOne("Danish", 19, {"editing", "sales"});
    userOne.displayUserData();

    // Copy the object
    User userCopied = userOne;
    userCopied.displayUserData();

    *userOne.fName = "Modified name------------------";

    cout << "user one" << endl;
    userOne.displayUserData();
    cout << "User copied----------------------------" << endl;
    userCopied.displayUserData();

    return 0;
}