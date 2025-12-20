#include <iostream>
using namespace std;

void recPrint(int n,int i){
   if (i==n) return;
    cout<<"I love Recursion\n";
    recPrint(n,i+1);
}

int main(){

int n;
cin>>n;
recPrint(n,0);
    return 0;
}