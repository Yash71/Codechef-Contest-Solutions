#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int pro=0, eng=0, both=0, nil=0, ans=0, mini;
    for(ll i=0;i<n;i++){
      if(s[i]=='1' && t[i]=='1') both++;
      else if(s[i]=='1') pro++;
      else if (t[i]=='1') eng++;
      else nil++;
    }
    mini=min(pro,eng);
    pro-=mini;
    eng-=mini;
    ans+=mini;

    mini=min(both,pro+eng+nil);
    ans+=mini;
    both-=mini;

    ans+=both/2;
    cout<<ans<<endl;
  }
  return 0;
}