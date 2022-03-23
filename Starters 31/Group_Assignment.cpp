#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        cout << 2 * n - x + 1 << "\n";
    }
    return 0;
}