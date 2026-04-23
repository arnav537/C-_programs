#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, h;
    while (1)
    {
        cout << "\n1. Evaluate greater than or lesser than";
        cout << "\n2. Add";
        cout << "\n3. Subtract";
        cout << "\n4. Multiply";
        cout << "\n5. Division";
        cout << "\n0. Exit";
        cout << "\nFirst no:";
        cin >> a;
        cout << "\nSecond no:";
        cin >> b;
        cout << "\nEnter : ";
        cin >> h;
        c = a + b;
        d = a - b;
        e = a * b;
        
        // Check for division by zero before dividing
        if (b != 0)
            f = a / b;
        else
            f = 0; // Or handle error

        if (h == 2)
        {
            cout << "\nSum of no:" << c;
        }
        else if (h == 4)
        {
            cout << "\nMul of no:" << e;
        }
        else if (h == 5)
        {
            if (b != 0)
                cout << "\nDiv of no:" << f;
            else
                cout << "\nCannot divide by zero";
        }
        else if (h == 3)
        {
             cout << "\nSub of no:" << d;
        }
        else if (h == 1)
        {
            if (a > b)
                cout << "\n a is bigger";
            else
                cout << "\nb is bigger";
        }
        else if (h == 0)
        {
            break;
        }
    }
    return 0;
}