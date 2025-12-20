#include<iostream>
using namespace std;
class Node{
public :
int value;
Node*next;
Node*prev;

};
Node*head=NULL;
Node*tail=NULL;


void display()
{
    if(head==NULL){
        cout<<"empty\n";
         return;
    }
    Node*Current=head;
    do{
  cout<<Current->value<<" ";
  Current=Current->next;
    }while(Current!=head);
}

void insert_Last(int val){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        newNode->next=newNode;
        head=newNode;
        newNode->prev=newNode;
        tail=newNode;
    }else{
        newNode->next=head;
        head->prev=newNode;
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}

void insert_First(int val){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        newNode->next=newNode;
        newNode->prev=newNode;
        head=newNode;
tail =newNode;
    }else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        tail->next=newNode;
        newNode->prev=tail;
    }
}

void delete_Last(){
    if(head==NULL){
        cout<<"empty\n";
        return;
    }else{
        if(head->next==head){
            delete head;
        head=tail=NULL;
        return;
        }else{
           tail=tail->prev;
           delete tail->next;
           tail->next=head;
           head->prev=tail;

        }
    }
}


void delete_First(){
    if(head==NULL){
        cout<<"empty\n";
        return;
    }else{
       if(head->next==head){
        delete head;
        head=tail=NULL;
       }else{
        head=head->next;
        delete head->prev;
          tail->next=head;
          head->prev=tail;
       }
    }
}

void insert_Before(int val,int el){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        cout<<"empty\n";
        delete newNode;
        return;
    }else{
        if(head->value==el){
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
            tail->next=newNode;
            newNode->prev=tail;

        }else{
           Node* Current=head->next; //!مهم جدااااااااااااااااا تبدا من ال بعده لو بدات ب هيد مش هيخش اللوب اصلا
         while(Current!=head){
            if(Current->value!=el){
                Current=Current->next;
            }else{
                break;
            }
         }       
         if(Current==head){
            cout<<"Notfound\n";
            delete newNode;
            return;
         }else{
            newNode->next=Current;
            Current->prev->next=newNode;
            newNode->prev=Current->prev;
            Current->prev=newNode;
         }
        }
    }
}

int main(){


    return 0;
}