#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a,sum=0,avg=0;
        for(int i=0;i<n-1;i++){
            cin>>a;
            sum+=a;
        }
        avg=(x*n)-sum;
        cout<<(avg >=0 ? avg : 0 )<<"\n";

    }
    return 0;
}
