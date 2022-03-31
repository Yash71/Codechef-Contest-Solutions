#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                v.push_back({i + 1, n - i});
                for (int j = i; j < n; j++)
                {
                    s[j] = s[j] == '1' ? '0' : '1';
                }
            }
        }
        cout << v.size() << "\n";
        for (auto it : v)
            cout << it.first << " " << it.second << "\n";
    }
    return 0;
}
