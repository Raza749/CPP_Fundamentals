#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base/Main/Parent class
class Tea
{
protected: // Changed from private to protected
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea constructor called... " << teaName << endl;
    }

    // Virtual function
    virtual void brew() const
    {
        cout << "Brewing " << teaName << " with generic method." << endl;
    }

    virtual void serve() const
    {
        cout << "Serving " << servings << " cup of tea with generic method." << endl;
    }

    // Destructor
    virtual ~Tea()
    {
        cout << "Tea Destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "Green Tea constructor called." << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << " by steeping green tea leaves." << endl;
    }

    ~GreenTea()
    {
        cout << "Green Tea destructor called." << endl;
    }
};

class BlackTea : public Tea
{
public:
    BlackTea(int serve) : Tea("Black Tea", serve)
    {
        cout << "Black Tea constructor called." << endl;
    }

    void brew() const override final
    {
        cout << "Brewing " << teaName << " with milk and black chocolate." << endl;
    }

    ~BlackTea()
    {
        cout << "Black Tea destructor called." << endl;
    }
};

int main()
{

    // Test the functionality
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new BlackTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}
