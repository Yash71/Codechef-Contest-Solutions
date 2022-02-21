#include<iostream>
#include<vector>

using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=1;i<=n;i++){
            v.emplace_back(i);
        }
        if(n==1){
            cout<<1<<"\n";
            continue;
        }
        else if(n-1==k){
            swap(v[0],v[1]);
            for(auto it: v) cout<<it<<" ";
            continue;
        }
        else{
            int index=0;
            int swaps=n-k;
            while(swaps){
                swap(v[index],v[index+1]);
                index++;
                swaps--;
            }
            for(auto it: v) cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}