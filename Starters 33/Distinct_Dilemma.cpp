#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        int k=0;
        while(k*(k+1) <=2*sum) k++;
        cout<<k-1<<"\n";
    }
    return 0;
}
