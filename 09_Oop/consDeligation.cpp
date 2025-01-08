#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Course
{
public:
    string cName;
    float rating;
    vector<string> topics;

    // Main Constructor
    Course(string name, float rate, vector<string> top)
    {
        cName = name;
        rating = rate;
        topics = top;
        cout << "Main Constructor called..." << endl;
    }

    // Delegating Constructor
    Course(string name) : Course(name, 4.5, {"JavaScript", "Node", "React"})
    {
        cout << "Delegation Constructor called..." << endl;
    }

    // Display Details
    void displayDetails()
    {
        cout << "Course Title: " << cName << endl;
        cout << "Course Rating: " << rating << endl;
        cout << "Course Topics: ";
        for (string top : topics)
        {
            cout << top << " ";
        }
        cout << endl;
    }
};

int main()
{
    Course webDev("Web Development");
    webDev.displayDetails();

    return 0;
}
