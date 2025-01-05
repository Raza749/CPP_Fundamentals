#include <iostream>
#include <string>

using namespace std;

int main()
{

    string teaType[5] = {"Green Tea", "Oolong Tea", "Orange Tea", "Lemon Tea", "Milk Tea"};

    for (int i = 0; i < 5; i++)
    {

        if (teaType[i] == "Green Tea")
        {
            // skip the element using continue keyword
            cout << "Skipping the " << teaType[i] << endl;
            continue;
        }

        cout << "Brewing " << teaType[i] << "..." << endl;
    }

    return 0;
}