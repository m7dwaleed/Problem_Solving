#include <iostream>
using namespace std;

const int sz=5;
class ArrayQueue{
private:
int arr[sz]={};
int front;
int rear;
public:

ArrayQueue(): front (-1),rear (-1) {}; 

void enqueue (int val){
    if(rear==sz-1){
        cout<<"Queue is FULL\n";
        return;
    }else{
        if(rear==-1 && front ==-1){
            arr[++rear]=val;
            front++;
        }else{
            arr[++rear]=val;
        }
    }

}


void dequeue(){
    if(front==-1 ||front>rear){
 cout<<"empty\n";
 return;
    }else{
        front++;
    }
}



int peek(){
    if(front==-1 || front>rear)
    {
        cout<<"empty\n"; return -1;
    }else{
        return arr[front];
    }
}

void display(){
     if(front==-1 || front>rear)
    {
        cout<<"empty\n"; return ;
    }else{
      for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
      }
    }
    cout<<endl;
}
};




int main(){






    return 0;
}