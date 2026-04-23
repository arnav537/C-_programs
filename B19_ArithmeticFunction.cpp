#include <iostream>
using namespace std;

void disp(int c, int d, int e, int f)
{
    cout << "add of no : " << c;
    cout << "\nsub of no : " << d;
    cout << "\nmul of no : " << e;
    cout << "\ndiv of no : " << f;
}

int main()
{
    int a, b, c, d, e, f;
    cout << "Enter First no:";
    cin >> a;
    cout << "Enter Second no:";
    cin >> b;
    c = a + b;
    d = a - b;
    e = a * b;
    if (b != 0)
        f = a / b;
    else
        f = 0;
    disp(c, d, e, f);
    return 0;
}