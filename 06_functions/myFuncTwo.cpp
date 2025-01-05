#include <iostream>

using namespace std;

void pourTea(int cups)
{
    // cups += 5;
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main()
{

    int cups = 2;

    pourTea(cups);

    // cout << "Total cups are " << teaCups << endl;
    cout << "Total cups are " << teaCups << endl;

    return 0;
};