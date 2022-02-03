#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool palindrome(string str, int start, int end)
{
    bool flag = true;
    while (start < end)
    {
        if (str[start] != str[end])
        {
            flag = false;
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
        string s;
        int n;
        cin >> n;
        cin >> s;
        if (n == 3 || n % 2 != 0)
        {
            cout << "NO";
        }
        else
        {
            // if(!palindrome(s,0,s.size()-1)){
            int middle = (n - 1) / 2;
            // cout<<middle;
            if (palindrome(s, 0, middle) || palindrome(s, middle + 1, n - 1))
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";
                cout << "\n";

                string subString1 = "";
                string subString2 = "";
                for (int i = 0; i <= middle; i++)
                {
                    subString1 += s[i];
                }
                for (int i = middle + 1; i < n; i++)
                {
                    subString2 += s[i];
                }
                reverse(subString1.begin(), subString1.end());
                cout << subString1;
                cout << subString2;
            }
        }
        cout << "\n";
    }
    return 0;
}