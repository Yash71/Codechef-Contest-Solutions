#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
        cout<<(c<a || d<b ? "IMPOSSIBLE" : "POSSIBLE")<<"\n";
    }
    return 0;
}
