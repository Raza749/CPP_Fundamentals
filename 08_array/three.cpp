#include <iostream>
using namespace std;

// int getScores(int scores[], int size)
// {
//     int total = 0;
//     for (int i = 0; i < size; i++)
//     {
//         total += scores[i];
//     }
//     return total;
// }

double sum(double productPrices[], int numProducts)
{
    double totalPrice = 0;
    for (int i = 0; i < numProducts; i++)
    {
        totalPrice += productPrices[i];
    }
    return totalPrice;
};

int main()
{
    // int scores[7] = {45, 54, 90, 23, 90, 45, 87};

    // int totalScore = getScores(scores, 7);

    // cout << "Total Score: " << totalScore << endl;

    double productPrices[4] = {299.99, 49.99, 90.59, 90.34};

    double totalPrice = sum(productPrices, 4);

    cout << "The total price is : $" << totalPrice << endl;

    return 0;
}
