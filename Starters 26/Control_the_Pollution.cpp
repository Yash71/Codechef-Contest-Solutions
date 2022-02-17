#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int ans=1e9;
        for(int bus=0;bus<=ceil(n/100.0);bus++){
            int cars= max(double(0),ceil((n-bus*100)/4.0));
            int smoke=bus*x+cars*y;
            ans=min(ans,smoke);
        }
        cout<<ans<<"\n";
    }
    return 0;
}