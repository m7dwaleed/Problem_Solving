#include<iostream>
#include<string>
using namespace std;

int main(){

    string s,t;
    cin>>s>>t;

     size_t sz1=s.length();
    size_t sz2=t.length();
   

    int i=0;
    int j=0;
    while(sz2-- && i<sz1){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }


cout<<i+1;


    return 0;
}
