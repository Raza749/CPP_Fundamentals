#include <iostream>

using namespace std;

class Lang
{
private:
    string langName;
    int publishYear;

public:
    // Lang(string name,int year):langName(name),publishYear(year){};
    Lang(string name, int year)
    {
        langName = name;
        publishYear = year;
    }

    // friend function
    friend bool compareYear(const Lang &year, const Lang &year2);

    void display()
        const
    {
        cout << "Language name is: " << langName << endl;
        cout << "Language publishing year is: " << publishYear << endl;
    }
};

bool compareYear(const Lang &year, const Lang &year2)
{
    return year.publishYear < year2.publishYear;
}

int main()
{

    Lang langOne("C++", 1983);
    Lang langTwo("Java", 1995);
    // Lang langThree("Python", 1991);
    // Lang langFour("JavaScript", 1995);

    langOne.display();
    langTwo.display();
    // langThree.display();
    // langFour.display();

    if (compareYear(langOne, langTwo))
    {
        cout << "Language one is older than Language two" << endl;
    }
    else
    {
        cout << "Language two is older than Language one" << endl;
    }

    return 0;
}