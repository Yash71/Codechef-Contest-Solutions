#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){
    //Codechef video solution
    int n;
    cin>>n;
    set<string> st;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      st.emplace(x);
    }
    //create another check string
    for(int i=0;i<=n;i++){
      int num=i;
      string bin="";
      while(num){
        bin=to_string(num%2);
        num/=2;
      }
      reverse(bin.begin(), bin.end());

      //making the bin string of length namespace
      int cur=bin.size();
      string res=string(n-cur,'0');
      res+=bin;

      //Find if your string exists in the set
      if(st.find(res)==st.end()){
        cout<<res<<endl;
        break;
      }
    }
  }
  //General solution
    vector<string> st;
    for(int i=0;i<n;i++){
      cin>>st[i];
    }
    string ans="";
    for(int i=0;i<n;i++){
      if(st[i][i]==1) ans+='1';
      else ans+='0';
    }
  return 0;
}