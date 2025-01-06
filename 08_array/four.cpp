#include <iostream>

using namespace std;

int *productOrders(int order)
{
    int *orders = new int[order];
    for (int i = 0; i < order; i++)
    {
        orders[i] = (i + 1) * 1000;
    }
    return orders;
};

int main()
{

    int order = 5;
    int *productOrder = productOrders(order);

    for (int i = 0; i < order; i++)
    {
        cout << "Product Order " << i + 1 << ": " << productOrder[i] << endl;
    }

    delete[] productOrder;

    return 0;
}