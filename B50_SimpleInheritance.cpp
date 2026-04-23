#include <iostream>
using namespace std;

class c1
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

class c2 : public c1
{
public:
    void disp()
    {

        b = 20;
        c = 30;
        cout << "\n"
             << b;
        cout << "\n"
             << c;
    }
};

int main()
{
    c2 obj2;
    obj2.disp();
    return 0;
}