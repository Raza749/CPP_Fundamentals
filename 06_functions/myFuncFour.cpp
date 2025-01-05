#include <iostream>

using namespace std;

int main()
{

    // lamda function

    auto preparedTea = [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedTea(3);


    return 0;
}