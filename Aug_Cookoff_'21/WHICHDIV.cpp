#include<iostream>
using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int R;
    cin>>R;
    if(R>=1000 && R<1600){
      cout<<"3"<<endl;
    }
    else if(R>=1600 && R<2000){
      cout<<"2"<<endl;
    }
    else if(R>=2000 && R<=4500){
      cout<<"1"<<endl;
    }
  }
    return 0;
}