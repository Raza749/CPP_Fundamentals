#include <iostream>

using namespace std;

int main()
{

    int teaCups = 5, i = 0;

    // for loop
    for (int i = 1; i <= teaCups; i++)
    {
        cout << "Grewing cups " << i << " of tea... " << endl;
    }

    cout << "Outside of the loop." << endl;
    cout << "The value of outside the loop is :" << i << endl;

    for (int num = 5; num <= 50; num += 5)
    {
        cout << num << endl;
    }

    return 0;
};