#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(a+c>=n && b>=n) cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
    return 0;
}