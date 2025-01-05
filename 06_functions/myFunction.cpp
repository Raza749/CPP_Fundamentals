#include <iostream>

using namespace std;

int checkTemperature(int temperature)
{
    return temperature;
}

// declaration of function
void serveTea(int cups);

void makeTea()
{
    cout << "Boiling water,adding tea leaves ,strainning...." << endl;
}

void serveTea(string teaType = "Masal Tea"){
    cout << "Serving " << teaType << endl;
};



int main()
{

    int temp = checkTemperature(37);

    // cout << "The temperature of human body is " << temp << "C" << endl;
    // makeTea();
    // serveTea(3);

    serveTea("Lemon Tea");

    // serveTea();

    return 0;
}

// defination of function
void serveTea(int cups)
{
    cout << "Serving " << cups << " of tea " << endl;
}