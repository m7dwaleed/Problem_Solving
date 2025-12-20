#include <iostream>
using namespace std;




int main(){

int n;cin>>n;
string s;cin>>s;


int SoA=0;
int SoD=0;
for(int i=0;i<s.length();i++){
 if(s[i]=='A'){
    SoA+=1;
 }else if (s[i]=='D'){
  SoD+=1;
 }
}

if(SoA>SoD){
    cout<<"Anton\n";
}else if(SoA<SoD){
    cout<<"Danik\n";
}else {
    cout<<"Friendship\n";
}
    return 0;
}