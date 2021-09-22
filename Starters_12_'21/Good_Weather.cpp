#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v(7);
        int c1=0,c0=0;
        for(int i=0;i<7;i++){
            cin>>v[i];
            v[i]==1 ? c1++: c0++;
        }
        if(c1>c0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";        
    }
    return 0;
}