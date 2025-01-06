#include <iostream>
#include <string>
#include <vector>

using namespace std;

class AccountDetails
{
public:
    string fName;
    string username;
    string email;
    string password;
    bool isLoggedIn;
    int age;

    // Display Data

    void displayData()
    {
        cout << "*********Account User Details*********" << endl;
        cout << "Full Name : " << fName << endl;
        cout << "Username :@" << username << endl;
        cout << "Email : " << email << endl;
        cout << "Password : " << password << endl;
        cout << "Login Status : " << (isLoggedIn ? "Yes" : "No") << endl;
        cout << "Age : " << age << endl;
    };
};

int main()
{

    AccountDetails userOne;

    // userOne.fName = "Raza Ali";
    // userOne.username = "raza.dev";
    // userOne.email = "raza.dev@gmail.com";
    // userOne.password = "raza123";
    // userOne.isLoggedIn = true;
    // userOne.age = 23;

    cout << "Enter your full name : " << endl;
    // cin >> userOne.fName;
    cin.ignore();
    getline(cin, userOne.fName);
    cout
        << "Enter your username : " << endl;
    cin >> userOne.username;
    cout
        << "Enter your email : " << endl;
    cin >> userOne.email;
    cout
        << "Enter your password : " << endl;
    cin >> userOne.password;
    cout
        << "Are login (1 for yes and 0 no) : " << endl;
    cin >> userOne.isLoggedIn;
    cout
        << "Enter your age : " << endl;
    cin >> userOne.age;

    userOne.displayData();

    return 0;
}
