#include<iostream>
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        int sum=0;
        for(int i=0;i<n*2;i++){
            cin>>x;
            sum+=x;
        }
        sum%2==0?cout<<"YES":cout<<"NO";
        cout<<"\n";
    }
    return 0;
}