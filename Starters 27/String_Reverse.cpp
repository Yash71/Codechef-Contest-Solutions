#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void leftrotate(string &s, int d, int i)
{
    reverse(s.begin() + i, s.begin() + d + i);
    reverse(s.begin() + i + d, s.end());
    reverse(s.begin() + i, s.end());
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string r = s;
        int count = 0;
        reverse(r.begin(), r.end());
        for (int i = 0,j=i; i < s.length() || j<s.length() ; i++,j++)
        {
                // int j=i;
                while (i < s.length() && s[i] != r[j])
                {
                    i++;
                    count++;
                }
         
            // j++;
        }
        cout << count << "\n";
    }
    return 0;
}