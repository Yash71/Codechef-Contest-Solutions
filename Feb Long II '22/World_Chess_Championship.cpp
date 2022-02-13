#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        char arr[14];
        int carlson = 0, chef = 0, neutral = 0;
        int carl_Points = 0, chef_Points = 0;
        for (int i = 0; i < 14; i++)
        {
            cin >> arr[i];
            arr[i] == 'C' ? carlson++ : arr[i] == 'N' ? chef++
                                                      : neutral++;
        }
        carl_Points = (carlson * 2) + (neutral);
        chef_Points = (chef * 2) + (neutral);

        (carl_Points > chef_Points) ? cout << 60 * x : carl_Points == chef_Points ? cout << 55 * x
                                                                                  : cout << 40 * x;
        cout << "\n";
    }
    return 0;
}