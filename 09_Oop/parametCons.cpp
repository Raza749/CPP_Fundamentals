#include <iostream>
#include <vector>
// #include <string>

using namespace std;

// class
class User
{
public:
    string fName;
    int age;
    vector<string> skills;

    // Parameter Constructor
    User(string name,int age,vector<string>skills)
    {
        fName = name;
        age = age;
        skills = skills;

        cout << "Parameter constuctor called...." << endl;
    };

    void displayUserData()
    {
        cout << "User's full name: " << fName << endl;
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

    User userOne("Danish",19,{"editing,sales"});

    userOne.displayUserData();

    return 0;
}