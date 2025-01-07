#include <iostream>
#include <string>

using namespace std;

int main()
{

    //    2D array

    // int studentsMarks[3][5] = {
    //     {45, 32, 90, 78, 68}, // student 1 marks of 5 subjects
    //     {34, 54, 23, 33, 87}, // student 2 marks of 5 subjects
    //     {23, 32, 98, 25, 33}  // student 3 marks of 5 subjects
    // };

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "I am student : " << i + 1 << endl;

    // Nested loop to iterate the 5-col (5-value of the array)
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << studentsMarks[i][j] << " marks " << endl;
    //     }
    // }

    string programmingLangs[3][4] = {
        {"C++", "C", "C#", "Java"},                   // Array of programming languages 1
        {"Python", "JavaScript", "Ruby", "Rust"},     // Array of programming languages 2
        {"Go", "Php", "Laravel", "Node JS"} // Array of programming languages 3
    };

    // Outer loop
    for (int i = 0; i < 3; i++)
    {
        cout << "Array of programming languages "<< i + 1 << endl;

        // Inner loop
        for (int j = 0; j < 4; j++)
        {
            cout << programmingLangs[i][j] << " lang !" << endl;
        }
    }

    return 0;
}
