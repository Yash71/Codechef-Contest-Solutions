#include<iostream>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        if(n%4==0) cout<<n/4<<"\n";
        else if(n%4<=4) cout<<(n/4)+1<<"\n";
    }
    return 0;
}
