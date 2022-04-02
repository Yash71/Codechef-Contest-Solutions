#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        string n;
        cin >> d;
        cin >> n;
        bool flag = false;
        for (int i = 0; i < d; i++)
        {
            if (n[i] == '5' || n[i] == '0')
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << "\n";
    }
    return 0;
}
