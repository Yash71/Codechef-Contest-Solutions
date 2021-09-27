#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        if(n>m) swap(n,m);
        ll diff=m-n;
        ll case1=x*(n+m-2);
        ll case2=(y*(n-1)+diff*x);
        ll case3=(y*(n-1)+((diff/2)*2*y)+(diff%2)*x;

        ll fin=min({case1,case2,case3});
        cout<<ans<<"\n";
    }
}