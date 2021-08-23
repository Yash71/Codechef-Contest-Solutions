#include<bits/stdc++.h>
using namespace std;
void comm(){
  int n;
  cin>>n;
  unordered_map<int, int> m;
  for(int i=0;i!=n;i++){
   int x;
   cin>>x;
   m[x]++;
  }
  int ans=n;
  for(auto it:m){
    ans=min(ans,n-it.second);
  }
  if(n>=2){
    ans=min(ans,n-2);    
  }
  // else cout<<"0"<<endl;
  cout<<ans<<endl; 
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    comm();
  }
  return 0;
}