#include<iostream>
using namespace std;


void rec(int n,int i){
    if(n==1){
        cout<<n;
        return;
    } 
    
    cout<<n<<" ";
    rec(n-1,i);
}
int main(){

int n;
cin>>n;

rec(n,1);
    return 0;
}