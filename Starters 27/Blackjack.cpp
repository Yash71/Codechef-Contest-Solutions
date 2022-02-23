#include<iostream>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int remainder=21-a-b;
        remainder>=1 && remainder<=10?cout<<remainder:cout<<"-1";
        cout<<"\n";
    }
    return 0;
}