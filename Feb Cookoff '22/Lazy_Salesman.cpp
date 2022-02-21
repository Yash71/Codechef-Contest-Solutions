#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(sum>=w){
                cout<<n-1-i;
                break;
            }

        }
        cout<<"\n";
    }
    return 0;
}