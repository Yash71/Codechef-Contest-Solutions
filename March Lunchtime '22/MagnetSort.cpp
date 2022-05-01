#include <bits/stdc++.h>
using namespace std;
bool sorted(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        string s;
        cin>>s;
        int count=-1;
        // finding the max element
        int maxIndex=0;
        for(int i=1;i<n;i++){
            if(v[maxIndex]<v[i]) maxIndex=i;
        }
        // checking the position of south and north
        size_t south=s.find('S');
        size_t north=s.find('N');
        if(south!=string::npos && north!=string::npos){

            // checking if the array is pre-sorted
            if(sorted(v)){
                count=0;
            }
            else{
                // checking for first and last characters of string
                if((s[0]=='S' && s[n-1]=='N') || (s[0]=='N' && s[n-1]=='S')){
                    count=1;
                }
                else{
                    if(s[n-1]=='N'){
                        if(s[maxIndex]=='S'){
                            if(maxIndex>=south) count=1;
                            else count=2;
                        }
                        else count=2;
                    }
                    else{
                        if(s[maxIndex]=='N'){
                            if(maxIndex>=north) count=1;
                            else count=2;
                        }
                        else count=2;
                    }
                }
            }
        }
        else count=-1;
        cout<<count<<"\n";
    }
}
