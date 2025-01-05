#include <iostream>
#include <string>

using namespace std;

int main()
{

    string teaTypep[5] = {"Oolong Tea", "Lemon Tea", "Green Tea", "Black Tea", "Milk Tea"};

    for (int i = 0; i < 5; i++)
    {
        cout << "Brewing " << teaTypep[i] << "..." << endl;

        // Nested loop
        for (int j = 1; j <= 3; j++)
        {
            cout << "Brewing " << j << " cup of tea " << teaTypep[i] << endl;
        };
    };

    return 0;
}