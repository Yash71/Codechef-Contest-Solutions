#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d,l,r;
        cin>>d>>l>>r;
        if(d<l) cout<<"Too Early";
        if(d>r) cout<<"Too late";
        if(d>=l && d<=r) cout<<"Take the second dose now";
        cout<<"\n";
        return 0;
    }
}