#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v;
        for(auto &it:v) cin>>it;
        ll e=0,o=0;
        for(int i=0;i<n;i++){
            v[i]%2==0 ? e++ : o++;
        }
        cout<<min(e, ((n+1)/2)) + min(o,(n/2))<<"\n";
    }
    return 0;
}