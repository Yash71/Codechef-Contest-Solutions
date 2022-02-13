#include <iostream>
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
        vector<int> v;
        vector<int> index;
        int counter = 0;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.emplace_back(x);
            index.emplace_back(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (index[i] + 1 == v[i])
            {
                for (int j = i; j < n; j++)
                {
                    index[j] = j + 1;
                }
                counter++;
            }
        }

        cout << counter << "\n";
    }
    return 0;
}