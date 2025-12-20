#include <iostream>
using namespace std;



int main(){
int n;
cin>>n;
  int count=0;
    string arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

int c=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            c++;
        }
    }


cout<<c;




    return 0;
}