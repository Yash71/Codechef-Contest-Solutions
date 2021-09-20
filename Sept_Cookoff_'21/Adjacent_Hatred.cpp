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
        vector<int> e,o;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0) e.emplace_back(v[i]);
            else o.emplace_back(v[i]);
        }
        if(e.size()==0 || o.size()==0){
            cout<<"-1"<<"\n";
            continue;
        }
        if(e.size()==o.size()){
            for(int i=0;i<o.size();i++){
                cout<<o[i]<<" ";
                cout<<e[i]<<" ";
            }
        }
        if(e.size()>o.size()){
            for(int i=0;i<o.size();i++){
                cout<<o[i]<<" ";
                cout<<e[i]<<" ";
            }
            for(int i=o.size();i<e.size();i++) cout<<e[i]<<" ";
        }
        else{
            for(int i=0;i<e.size();i++){
                cout<<e[i]<<" ";
                cout<<o[i]<<" ";
            }
            for(int i=e.size();i<o.size();i++) cout<<o[i]<<" ";
            
        }
        cout<<"\n";
    }
    return 0;
}