#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s,p;
    cin>>s>>p;
    bool id=true;
    for(int i=0;i<n;i++){
        if(s[i]!=p[i]){
            id=false;
            break;
        }
    }
    if(id){
        cout<<"YES"<<"\n";
        continue;
    }
    int c1=0,c0=0;
    for(int i=0;i<n;i++){
        p[i]=='1' ? c1++ : c0++;
    }
    if(c1>0 && c0>0) cout<<"YES";
    else cout<<"NO";
    }
    cout<<"\n";
    }
}