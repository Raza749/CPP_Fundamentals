#include <iostream>
#include <string>

using namespace std;

int main()
{

    string response;

    do
    {
        cout << "Do you want to more tea (yes or no): " << endl;
        getline(cin, response);
    } while (response != "no");

    return 0;
}