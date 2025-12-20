#include <iostream>
using namespace std;



int main(){

int n;
int h;
cin>>n;
cin>>h;

int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
int s=0;
for(int i=0;i<n;i++){
    if(arr[i]>h){
       s+=2;
    }else if(arr[i]<=h){
        s+=1;
    }
}
cout<<s;
    return 0;
}