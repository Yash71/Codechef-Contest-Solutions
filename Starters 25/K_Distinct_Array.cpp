#include<iostream>
#include<vector>
using namespace std; 
#define int long long
signed main(){
    int toRemove;
    cin>>toRemove;
    while(toRemove--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        int toRemove=n*(n+1)/2-k;
        int current=1;
        for(int i=n-1;i>=1  && toRemove>0;i--){
            if(i<=toRemove){
                v[current]=1;
                toRemove-=i;
            }
            else{
                int moreToRemove=i-toRemove;
                v[current+moreToRemove]=1;
                toRemove=0;
            }
            current++;
        }
        for(auto i: v) cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}