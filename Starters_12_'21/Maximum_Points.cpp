#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y,z;
        cin>>a>>b>>c;
        cin>>x>>y>>z;
        int ans=0;
        for(int i=0;i<=20;i++){
            for(int j=0;j<=20;j++){
                for(int k=0;k<=20;k++){
                    int ttl=i*a+j*b+k*c;
                    if(ttl<=240) ans=max(ans, i*x+j*y+k*z);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}