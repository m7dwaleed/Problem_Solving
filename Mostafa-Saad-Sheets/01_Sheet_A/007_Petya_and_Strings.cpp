#include<iostream>
using namespace std;


int main(){
  
   string s1;
   string s2;

   cin>>s1>>s2;


   for(char &c  :s1){
    c=tolower(c);
   }
    for(char &c2  :s2){
    c2=tolower(c2);
   }
   for(int i=0;i<s1.length();i++){
    if(s1[i]>s2[i]){
        cout<<1;
        return 0;
    }else if(s1[i]<s2[i]){
        cout<<-1;
        return 0;
    }
   }
   cout<<0;
   return 0;
  return 0;
}