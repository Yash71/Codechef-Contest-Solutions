#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        // edge case 1
        if (y == 0)
        {
            cout << x;
        }
        // edge case 2
        else if (x == y)
        {
            cout << (x + y) - 1;
        }
        // edge case 3
        else
        {
            cout << (x + y);
        }
        cout << "\n";
    }
    return 0;
}