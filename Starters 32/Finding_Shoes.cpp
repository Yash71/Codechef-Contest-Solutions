#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << (m > n ? n : (2 * n - m)) << "\n";
    }
    return 0;
}
