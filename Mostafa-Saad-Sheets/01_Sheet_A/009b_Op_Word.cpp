#include<iostream>
using namespace std;




int main(){
 string s;
 cin>>s;

 int Count_Upper=0;
 for(char c:s){
   if(isupper(c)) {
    Count_Upper++;
   }
 }

bool toUpper = (Count_Upper > s.length()-Count_Upper);

 for(char &c:s){
    if(toUpper){
        c=toupper(c);
    }else{
       c= tolower(c);
    }
 }
 cout<<s;

    return 0;
}