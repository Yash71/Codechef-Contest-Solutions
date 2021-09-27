#include <iostream>
#include<set>
using namespace std;

int main() {

   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   int size=n/2;
   if(n%4!=0){ cout<<"NO"<<"\n"; continue; }
   else{
   cout<<"YES"<<"\n";
   set<int> a;
   set<int> b;
   int x = 1; 
   int y = n; 
   int chk = 0; 
   int size = n/2; 
   while(size--){ 
       if(chk == 0){ 
           a.insert(x); 
           x++; 
           chk = 1; 
       }  
       else { 
           a.insert(y); 
           y--; 
           chk = 0; 
       }
   } 
   for(int i=x;i<=y;i++) b.insert(i); 
   for(auto it: a) cout<<it<<" ";
   cout<<"\n";
   for(auto it: b) cout<<it<<" ";
   }
   cout<<"\n";
}   
   return 0;
}
