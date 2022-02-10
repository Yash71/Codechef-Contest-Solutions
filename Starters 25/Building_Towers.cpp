#include<iostream>
using namespace std;

int main(){ 

    int t;
    cin>>t;
    while(t--){
        long long x,m;
        cin>>x>>m;
        long long height=1;
        long long moves=1;
        while(height<x){
            height*=2;
            moves++;
        }
        if(moves>m){
            cout<<0;
        }
        else{
            cout<<1+(m-moves);
        }
        cout<<"\n";
    }
    return 0;
}