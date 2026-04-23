#include <iostream>
using namespace std;

class c1
{
public:
    c1()
    {
        cout << "this is a constructor";
    }
    ~c1()
    {
        cout << "\nthis is a destructor";
    }
};

int main()
{
    {
        c1 obj;
    } // destructed here
    return 0;
}