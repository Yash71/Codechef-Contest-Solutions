#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool palindrome(string str, int start, int end)
{
    bool flag = false;
    while (start <= end)
    {
        if (str[start] == str[end])
        {
            flag = true;
            break;
        }
        start++;
        end--;
    }

    return flag;
}
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
        sort(s.begin(), s.end());
        reverse(s.begin() + n / 2, s.end());
        // cout<<s;
        // cout<<palindrome(s,0,n-1);
        palindrome(s, 0, n - 1) ? cout << "NO" : cout << "YES\n"
                                                      << s;
        cout << "\n";
    }
    return 0;
}