#include<iostream>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        (a*b)<=(x*y)? cout<<"Yes":cout<<"No";
        cout<<"\n";
    }
    return 0;
}