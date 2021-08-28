#include<iostream>
#include<vector>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it:v)cin>>it;
    int ans=0,maxx=-1;
    for(int i=n-1;i>0;i--){
      if(v[i]>maxx){
        ans++;
        maxx=v[i];
      }
    }
    if(v[0]>=maxx) cout<<ans<<endl;
    else cout<<-1<<endl;
  }
}