#include<iostream>
#include<vector>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int maxi=p;
        int maxi_final=p;
        // vector<int> person(n);
        int x=0;
        for(int i=0;i<n;i++){
            // cin>>person[i];
            cin>>x;
            maxi+=x;
            maxi_final=max(maxi_final,maxi);
        }
        cout<<maxi_final<<"\n";

    }
    return 0;
}