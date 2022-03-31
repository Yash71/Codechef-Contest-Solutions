#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        cout << (x > n ? v[n - 1] : v[x]) << "\n";
    }
    return 0;
}
