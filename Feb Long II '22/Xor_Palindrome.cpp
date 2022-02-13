#include<iostream>
#include<string>
#include<vector>

using namespace std; 
bool palinXor(vector<int> v){
    int low=0;
    int high=v.size()-1;
    int palindrome=v[low]^v[high];
    while(low<=high){
        if(v[low] ^ v[high]!=palindrome){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v;
        for(int i=0;i<n;i++){
            v.emplace_back(s[i]);
        }
        for(auto it:v) cout<<it<<" ";
        // if(palinXor(v)){
        //     cout<<"YES"<<"\n";
        //     // continue;
        // }
        // int zeroCount=0,oneCount=0;
        // for(int i=0;i<n;i++){
        //     s[i]=='0'?zeroCount++:oneCount++;
        // }
        // if(zeroCount==n/2 || oneCount==n/2){
        //     cout<<"YES"<<"\n";
        //     continue;
        // }
        // if(abs(zeroCount-oneCount)==1){
        //     cout<<"YES"<<"\n";
        //     continue;
        // }
        // else{
        // cout<<"NO"<<"\n";
        // }
    }
    return 0;
}