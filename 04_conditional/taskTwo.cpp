#include <iostream>

using namespace std;

int main()
{

    int hour;

    cout << "Enter the current hour (0-23)" << endl;
    cin >> hour;

    if (hour >= 8 && hour <= 18)
    {
        cout << "Tea shop is open" << endl;
    }
    else
    {
        cout << "Tea shop is closed " << endl;
    };

    return 0;
}