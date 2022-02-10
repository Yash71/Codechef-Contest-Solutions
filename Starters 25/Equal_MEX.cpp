#include<iostream>
#include<vector>
#include<map>
#include<algorithm> 
using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int size_vec=2*n;
        // vector<int> v(size_vec);
        int x;
        // for(auto &it:v) cin>>it;

        // sort(v.begin(),v.end());
        // int sizeO=0;
        // for(int i=0;i<size_vec;i++){
        //     if(v[i]==0) sizeO++;
        // }
        // if(sizeO==0) cout<<"YES";
        // else if(sizeO%2!=0) cout<<"NO";
        // else if{
        //     int size=0;
        //     for(int i=0;i<size_vec;i++){
        //          if(arr)
        //     }
        // }
        // cout<<"\n";
        map<int,int> mpp;
        for(int i=0;i<2*n;i++){
            cin>>x;
            mpp[x]++;
        }
        // if(mpp[0]==0) cout<<"YES";
        // else if(mpp[0]%2!=0) cout<<"NO";
        // else{
            bool flag=true;
            for(int i=0;i<2*n;i++){
                if(mpp[i]==1){
                    flag=false;
                    break;
                }
                else if(mpp[i]==0) break;                  
            }
            flag?cout<<"YES":cout<<"NO";
            
    // }
        cout<<"\n";
    }
    return 0;
}