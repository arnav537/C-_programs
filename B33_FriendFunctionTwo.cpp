#include <iostream>
using namespace std;

class c1
{
private:
    int a;
    friend void disp(c1 &obj);
};

void disp(c1 &obj)
{
    obj.a = 2000;
    cout << obj.a;
}

int main()
{
    c1 obj;
    disp(obj);
    return 0;
}