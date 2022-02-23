#include <iostream>
typedef long long ll;
using namespace std;
int gcd(int b, int c)
{
    return c == 0 ? b : gcd(c, b % c);
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll b, c;
        cin >> b >> c;
        int divisor=gcd(b,c);
        cout<<c/divisor<<"\n";
    }
    return 0;
}