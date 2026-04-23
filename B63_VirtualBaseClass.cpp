#include <iostream>
using namespace std;

class c1
{
protected:
    int a;
};

class c2 : virtual public c1
{
};

class c3 : virtual public c1
{
};

class c4 : public c2, public c3
{
public:
    void disp()
    {
        a = 100;
        cout << a;
    }
};

int main()
{
    c4 obj;
    obj.disp();
    return 0;
}