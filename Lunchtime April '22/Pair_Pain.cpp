#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x=0;
        long long count1=0,count2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==2) count2++;
            if(x==1) count1++;
        }
        long long ans=0;
        ans=count1*(n-count1);
        if(count1>1) ans+=count1*(count1-1)/2;
        if(count2>1) ans+=count2*(count2-1)/2;
        cout<<ans<<"\n";
    }
    return 0;
}
