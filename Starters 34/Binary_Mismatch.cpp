#include <bits/stdc++.h>
using namespace std;
void invertString(string& s){
    for(int i=0;i<s.length();i++){
        s[i]^=1;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int c1=count(s.begin(),s.end(),'1');
        int c0=n-c1;

        if(c1>c0) invertString(s);
        int count=abs(c0-c1);
        if(count%2==0){
            count/=2;
            map<int,int> mpp;
            mpp[0]=0;

            int prefSum=0;
            for(int i=0;i<n;i++){
                (s[i]=='1') ? prefSum-- : prefSum++;
                if(mpp.find(prefSum-count)!=mpp.end()){
                    cout<<"YES"<<"\n";
                    cout<<mpp[prefSum-count]+1<<" "<<i+1<<"\n";
                    break;
                }
                else mpp[prefSum]=i+1;
            }
        }
        else cout<<"NO"<<"\n";
        
    }
    return 0;
    
}
