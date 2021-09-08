#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        
        vector<int> v1(3);
        vector<int> v2(3);
        for(auto &it:v1) cin>>it;
        for(auto &it: v2) cin>>it;
        int c1=0,c2=0;
        for(int i=0;i<3;i++){
            if(v1[i]==1) c1++;
            if(v2[i]==1) c2++;
        }        
            if(c1==c2) cout<<"Pass"<<"\n";
            else cout<<"Fail"<<"\n";
         
    }
    return 0;
}
