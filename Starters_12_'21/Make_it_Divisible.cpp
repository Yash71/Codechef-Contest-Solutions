#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<"3";
        if(n==2) cout<<"33";
        if(n>=3){
            cout<<"3";
            for(int i=0;i<n-2;i++) cout<<"0";
            cout<<"3";
        }
        cout<<"\n";
    }
    return 0;
}