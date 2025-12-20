#include<iostream>
using namespace std;

int Binary_Search(int arr[],int sz , int key)
{
    int r=0;
    int l=sz-1;
    
    while(l>=r)
    {
        int mid=r+(l-r)/2;
        
        if(key==arr[mid]) return mid;
        else if(key<arr[mid]) l=mid-1;
        else if(key>arr[mid]) r=mid+1;
    }
    return -1;
}






int main()
{
int arr[5]={3,4,6,7,8};
int n=5;
int key=0;
cout<<Binary_Search(arr,n,key);
    return 0;
}