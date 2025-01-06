#include <iostream>

using namespace std;

int main()
{

    // string langs[6] = {
    //     "C",
    //     "C++",
    //     "C#",
    //     "Java",
    //     "JavaScript",
    //     "Python"};

    // cout << "These are the top programming languages..." << endl;

    // for(int i = 0; i < 6 ; i++){
    //     cout << langs[i] << endl;
    // }

    int studentsMarks[5] = {90, 80, 45, 98, 67};

    for (int score : studentsMarks)
    {
        cout << "Student's marks : " << score << endl;
    }

   








    return 0;
}