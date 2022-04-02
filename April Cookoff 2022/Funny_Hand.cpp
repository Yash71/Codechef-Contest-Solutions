#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (abs(a - b) == 1)
        {
            if (a == 1 || a == n || b == 1 || b == n)
                cout << "1"
                     << "\n";
            else
            {
                cout << "2"
                     << "\n";
            }
        }
        else if (abs(a - b) == 2)
            cout << "1"
                 << "\n";
        else
            cout << "0"
                 << "\n";
    }
    return 0;
}
