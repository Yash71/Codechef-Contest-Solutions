#include<iostream>
#include<vector>
#include<map>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        map<char,int> mpp;
        for(int i=0;i<n;i++){
            cin>>x;
            x%2==0 ? mpp['e']++ : mpp['o']++;
        }
        if(mpp['o']%2!=0) cout<<mpp['e']<<"\n";
        else cout<<min(mpp['e'],mpp['o']/2)<<"\n";
    }
    return 0;
}
