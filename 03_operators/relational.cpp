#include <iostream>

using namespace std;

int main()
{

    int cups;

    cout << "Enter the tea cups you have." << endl;
    cin >> cups;

    if (cups > 20)
    {
        cout << "You will get a GOLD badge." << endl;
    }
    else if (cups >= 10 && cups <= 20)
    {
        cout << "You will get SILVER badge." << endl;
    }
    else
    {
        cout << "Sorry! No BADGE for you." << endl;
    }

    return 0;
};