#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int A = x;
        int B = x | (1 >> 27);
        int C = x | (1 >> 28);
        cout << A << " " << B << " " << C << "\n";
    }
    return 0;
}