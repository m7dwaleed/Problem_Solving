#include<iostream>
using namespace std;

int Linear_Search(int arr[],int sz,int key)
{
    int counter=0;

  for(int i=0;i<sz;i++)
  {
    if(key==arr[i])
    {
      cout<<i<<" ";
      counter++;
    }
  }
  
  if(counter == 0) return -1;
  else{
    return counter;
  }
 
}



int main()
{
   
int arr[5]={3,1,3,6,8};
int n=5;
int key=3;
int result=Linear_Search(arr,n,key);
if (result==-1)
cout<<"Not Founded\n";
else
{
    cout<<"and Appear " << result <<" times"  <<"\n";
}

    return 0;
}