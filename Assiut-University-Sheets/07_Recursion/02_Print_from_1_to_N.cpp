#include<iostream>
using namespace std;

void rec(int i,int n)
{
    if(i>n) return;
    
    cout<<i<<endl;
    rec(i+1,n);
}
int main(){
int n;
cin>>n;
rec(1,n);

    return 0;
}