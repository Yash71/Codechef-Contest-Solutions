#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<int> x;
        unordered_set<int> y;

        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][0];
            cin >> arr[i][1];
        }
        for (int i = 0; i < n; i++)
        {
            x.insert(arr[i][0]);
            y.insert(arr[i][1]);
        }
        cout << x.size() + y.size() << "\n";
    }

    return 0;
}