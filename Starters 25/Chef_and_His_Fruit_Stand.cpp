#include<iostream>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        x/2<=y?cout<<x/2:cout<<y;
        cout<<"\n";
    }
    return 0;
}