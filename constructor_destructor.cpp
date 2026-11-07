#include <iostream>
using namespace std;

class Demo
{
public:
    // Constructor
    Demo()
    {
        cout << "Constructor is executed." << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor is executed." << endl;
    }
};

int main()
{
    cout << "Creating Object..." << endl;

    Demo obj;

    cout << "Object is being used." << endl;
    cout << "End of main()." << endl;

    return 0;
}
