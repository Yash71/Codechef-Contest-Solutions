#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int count1 = 0, count0 = 0;
        for (int i = 0; i < n; i++)
        {
            s[i] == '1' ? count1++ : count0++;
        }
        int res = 0;
        res = count1 > count0 ? count0 * 2 + 1 : count1 == count0 ? n : count1 * 2 + 1;
        cout << res << "\n";
    }
    return 0;
}