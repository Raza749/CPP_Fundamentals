#include <iostream>
#include <string>

// using namespace std;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // std::cout << "Hello World in C++" << std::endl;
    // std::cout << "Learning C++ from Chai aur Code" << std::endl;
    cout << "Hello From the C++";

    string names[5] = {"Raza", "Danish", "Riaz", "Fari", "Hassan"};

    for (string name : names)
    {
        cout << name << " " << endl;
    }

    return 0;
};