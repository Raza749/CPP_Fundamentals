#include <iostream>

using namespace std;

// Abstract class
class Tea
{
public:
    virtual void prepareIngredients() = 0; // pure virtual function
    virtual void brew() = 0;               // pure virtual function
    virtual void serve() = 0;              // pure virtual function

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// derived class
class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready." << endl;
    };
    void brew() override
    {
        cout << "Green Tea brewed " << endl;
    };
    void serve() override
    {
        cout << "Green Tea served " << endl;
    };
};
class LemonTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Lemon and tea leaves and water is ready." << endl;
    };
    void brew() override
    {
        cout << "Lemon Tea brewed " << endl;
    };
    void serve() override
    {
        cout << "Lemon Tea served " << endl;
    };
};

int main()
{
    GreenTea greenTea;
    LemonTea lemonTea;

    greenTea.makeTea();
    lemonTea.makeTea();

    return 0;
}