#include <iostream>

using namespace std;

void pourdTea(int &cups)
{
    cups += 5;
    cout << "Poured cups " << cups << endl;
}

int main()
{

    int cups = 2;
    pourdTea(cups);
    cout << "Total cups  are " << cups << endl;

    return 0;
};