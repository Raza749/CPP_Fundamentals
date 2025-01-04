#include <iostream>

using namespace std;

int main()
{

    bool isStudent;
    int cups;

    cout << "Are you a student (1 for yes and 0 no)?" << endl;
    cin >> isStudent;
    cout << "How many cups have you purchased?" << endl;
    cin >> cups;

    if (isStudent || cups >= 15)
    {
        cout << "You are eligible for a discount." << endl;
    }
    else
    {
        cout << "You are NOT eligible for a discount." << endl;
    }

    return 0;
};