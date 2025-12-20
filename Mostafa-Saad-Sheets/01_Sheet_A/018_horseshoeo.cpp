#include<iostream>
using namespace std;

/*
*السؤال
?من الاخر هو عايز يلبس حدوة للحصان يكون كله مختلف عن بعضه وهو معاه 4 حدوات من السنه الفاتت
?فالمطلوب تعرفله محتاج كام حدوه عشان يبقي الاربعو مختلفين وهو رامز لكل حدوه برقم

*الحل
?هنحلها بالطريقة العادية نعمل عداد للمتكرر وبس وده هو ال هيكون عايزين بداله 
?لو مثلا عندي 1 2 3 3 فكده هيبقي العداد 1 وبس 

*/

int  main(){

    int n=4;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}


  int count=0;
for(int i=0;i<n;i++){
    bool found=false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            found=true;
            break;
        }
    }
  if(found==true){
    continue;
  }
   

  for(int k=i+1;k<n;k++){
    if(arr[i]==arr[k]){
        count++;
    }
  }


}
cout<<count;
    return 0;
}