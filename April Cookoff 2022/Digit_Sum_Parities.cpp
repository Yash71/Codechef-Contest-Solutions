#include <iostream>
using namespace std;
int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = digitSum(n);
        if (sum % 2 == 0)
        {
            while (sum % 2 == 0)
            {
                n++;
                sum = digitSum(n);
            }
            cout << n << "\n";
        }
        else
        {
            while (sum % 2 != 0)
            {
                n++;
                sum = digitSum(n);
            }
            cout << n << "\n";
        }
    }
    return 0;
}
