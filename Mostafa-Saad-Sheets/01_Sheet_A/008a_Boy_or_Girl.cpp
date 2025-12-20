#include<iostream>
using namespace std;




int main(){
int sum=0;
string arr;
cin>>arr;

int c=arr.length();

for(int i=0;i<c;i++){
    bool found = false;
   

    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            found=true;
            break;
        }
    }
     
     if(found==true){
     continue;
     }

     int count=0;
     for(int k=i;k<c;k++){
        if(arr[i]==arr[k])
        {count++;}
     }

    
     sum++;

}

    if(sum%2==0){
        cout<<"CHAT WITH HER!\n";
    }else{
        cout<<"IGNORE HIM!\n";
    }
    return 0;
}