#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long pos=0,neg=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x!=0){
            x>0? pos++ : neg++;
            }
        }
        long long res=n*(n-1)/2;
        long long res1=pos*(pos-1)/2;
        long long res2=neg*(neg-1)/2;
        if(pos==n || neg==n) cout<<res;
        else cout<<res1+res2;
        cout<<"\n";

    }
    return 0;
}
