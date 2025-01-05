#include <iostream>

using namespace std;

int main()
{

    int teaCups;

    cout << "Enter number of tea cups to serve : " << endl;
    cin >> teaCups;

    //    while loop
    while (teaCups > 0)
    {
        teaCups--;
        cout << "Serving a cup of tea " << endl;
        cout << teaCups << " remaining." << endl;
    };
    cout << "All tea cups are served." << endl;

    return 0;
};