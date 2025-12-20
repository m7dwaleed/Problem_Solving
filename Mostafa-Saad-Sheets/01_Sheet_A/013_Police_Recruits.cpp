#include <iostream>
using namespace std;


int main(){

    int n;cin>>n;

    int C_P=0;
    int C_U=0;

    int e;

    for(int i=0;i<n;i++){
        cin>>e;
      if(e<0){
        if(C_P==0){
          C_U++;
        }else{
            C_P--;
        }
      }
      else{
        C_P+=e;
      }
    }
      cout<<C_U;
    return 0;
}