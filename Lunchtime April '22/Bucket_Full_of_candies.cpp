#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,m,l,rem;
        cin>>n>>m>>l;
        rem=m%(l+n-1);
        if(n==0){
            cout<<m<<"\n";
        }
        else if(rem<l){
            cout<<rem<<"\n";
        }
        else if(rem>=l){
            cout<<"0"<<"\n";
        }
    }
    return 0;
}


// --------------------------------------------

#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,m,l,rem;
        cin>>n>>m>>l;
        rem=m%(l+n-1);
        if(n==0){
            cout<<m<<"\n";
        }
        else if(rem<l){
            cout<<rem<<"\n";
        }
        else if(rem>=l){
            cout<<"0"<<"\n";
        }
    }
    return 0;
}
