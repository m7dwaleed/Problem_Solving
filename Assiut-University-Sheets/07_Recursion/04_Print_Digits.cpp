#include<iostream>
using namespace std;

void fun(int x){

    if(x==0) return;

    fun(x/10);
    cout<<x%10<<" ";
   
}   

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0)
        {
             cout<<'0';
        }
        else{
            
         fun(x);
        }
       
        cout<<endl;
    }

    return 0;
}