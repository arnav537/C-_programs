#include <iostream>
using namespace std;

int main()
{
    int abc[10];
    int a, s = 0;
    // Assuming user wants to enter 10 scores. 
    // Array indices are 0 to 9. Loop says a <= 10 which is 11 iterations (0..10).
    // This will cause buffer overflow abc[10].
    // Fixing loop to a < 10.
    for (a = 0; a < 10; a++)
    {
        cout << "Score : ";
        cin >> abc[a];
        s = s + abc[a];
    }
    cout << "total score of team: " << s;
    return 0;
}