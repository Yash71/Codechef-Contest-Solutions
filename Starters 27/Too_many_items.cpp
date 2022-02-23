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
        n % 10 == 0 ? cout << n / 10 : cout << (n / 10) + 1;
        cout << "\n";
    }
    return 0;
}