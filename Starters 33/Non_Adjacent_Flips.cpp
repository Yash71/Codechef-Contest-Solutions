#include <iostream>
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
        int ans = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == '1')
            {
                if (s[i + 1] == '1')
                {
                    ans = 2;
                    break;
                }

                else
                    ans = 1;
            }
        }
        if(ans==0 && s[n-1]=='1') ans=1;
        cout << ans << "\n";
    }
    return 0;
}
