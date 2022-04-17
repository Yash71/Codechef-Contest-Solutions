#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(c-(b/a) > 0 ? (c-(b/a)) : 0)<<"\n"; 
    }
}
