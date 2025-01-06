#include <iostream>
using namespace std;

int getScores(int scores[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    return total;
}

int main()
{
    // Array of scores
    int scores[7] = {45, 54, 90, 23, 90, 45, 87};

    // Calculate the total of scores
    int totalScore = getScores(scores, 7);

    // Display the total
    cout << "Total Score: " << totalScore << endl;

    return 0;
}
