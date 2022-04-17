#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        if(a%2==0 && b%2!=0 && b!=1){
                for(int i=0;i<a/2;i++){
                    s+='a';
                }
                for(int i=0;i<b;i++){
                    s+='b';
                }
                for(int i=0;i<a/2;i++){
                    s+='a';
                }
                cout<<s<<"\n";
                swap(s[0],s[a/2]);
                swap(s[s.length()-1],s[s.length()-a/2-1]);
                cout<<s<<"\n";
        }
        else if(b%2==0 && a%2!=0 && a!=1){
                for(int i=0;i<b/2;i++){
                    s+='b';
                }
                for(int i=0;i<a;i++){
                    s+='a';
                }
                for(int i=0;i<b/2;i++){
                    s+='b';
                }
                cout<<s<<"\n";
                swap(s[0],s[b/2]);
                swap(s[s.length()-1],s[s.length()-b/2-1]);
                cout<<s<<"\n";
        }
       else if(a%2==0 && b%2==0){
            for(int i=0;i<b/2;i++){
                    s+='b';
                }
                for(int i=0;i<a;i++){
                    s+='a';
                }
                for(int i=0;i<b/2;i++){
                    s+='b';
                }
                cout<<s<<"\n";
                if(a>=b){
                    swap(s[0],s[a/2]);
                    swap(s[s.length()-1],s[s.length()-a/2-1]);
                    cout<<s;
                }
                else{
                    swap(s[0],s[b/2]);
                    swap(s[s.length()-1],s[s.length()-b/2-1]);
                    cout<<s;
                }
        }
        else cout<<"-1";
        cout<<"\n";
    }
    return 0;
}
