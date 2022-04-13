#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a=1;
        vector<int> v(n,x);
        int i=0,j=n-1;
        if(n%2==0){
            while(i<j){
                v[i]-=a;
                v[j]+=a;
                a++;
                i++;
                j--;
            }
        }
        else{
            while(i!=j){
                v[i]-=a;
                v[j]+=a;
                a++;
                i++;
                j--;
            }
        }
    for(auto it: v) cout<<it<<" ";
    cout<<"\n";
    }
    return 0;
}
