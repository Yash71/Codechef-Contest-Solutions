#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
	    cin>>n;
	    string a,b;
	    cin>>a;
	    cin>>b;
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    string s=a+b;
	    int k=n;
	    int i=0;
	    int m=0;
	    while(k--){
	        s[i]=a[m++];
	        i=i+2;
	    }
	    int l=n;
	    int j=1;
	    int o=n-1;
	    while(l--){
	        s[j]=b[o--];
	        j=j+2;
	    }
	    
	    cout<<s<<endl;
    }
    return 0;
}