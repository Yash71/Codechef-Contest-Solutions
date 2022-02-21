#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        int end=0;
        sort(v.begin(),v.end());
        int i=0;
        while(i<k){
            int permut=v[i];
            for(int j=permut;j>end;j--){
                cout<<j<<" ";
            }
            end=permut;
            i++;
        }
        cout<<"\n";
    }
    return 0;
}