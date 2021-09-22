#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') continue;
            if((i+k<n && s[i+k]=='1') || (i-k>=0 && s[i-k]=='1')) continue;
            if(i+k<n) s[i+k]='1';
            else s[i]='0';
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}