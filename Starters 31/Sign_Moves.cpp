#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int res=0;
    // for(int i=0;i<t;i++){
    //     int steps=0;
    //     cin>>steps;
    //     if(res>=0)
    // }
    while(t--){
        int n;
        cin>>n;
        // int ans= (n+1)/2;
        // cout<< (n%2==0 ? ans : -ans) <<"\n";
        cout<< (n%2!=0 ? -(n+1)/2 : n/2)<<"\n";
    }
    return 0;

    // 011 & 111 => 011 
}
