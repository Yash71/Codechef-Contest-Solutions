#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            s[i] == '0' ? count0++ : count1++;
        }
        if (count0 == 0 || count1 == 0)
            cout << "0"
                 << "\n";
        else
            cout << min(x, y) << "\n";
    }
    return 0;
}
