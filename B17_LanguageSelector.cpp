#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "First no:";
    cin >> a;
    if (a == 0)
        cout << "\nBasic is easy";
    else if (a == 1)
        cout << "\nFortran is fun";
    else if (a == 2)
        cout << "\npascal may be structured";
    else if (a == 3)
        cout << "\n but c++ is the one";
    else
        cout << "\n invalid entry";
    return 0;
}