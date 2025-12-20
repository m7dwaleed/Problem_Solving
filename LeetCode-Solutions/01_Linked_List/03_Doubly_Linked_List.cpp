#include <iostream>
using namespace std;

class Node{
    public:
Node*next;
int value;
Node*prev;

};
Node*head=NULL;
Node*tail=NULL;


void display(){
    Node*Current=head;
    while(Current!=NULL)
    {
        cout<<Current->value<<" ";
        Current=Current->next;
    }cout<<endl;
}


void insert_Last(int val){
    Node*newNode=new Node;
    newNode->value =val;

    if(head==NULL){
        newNode->next=NULL;
        head=newNode;
        newNode->prev=NULL;
        tail=newNode;
    }else{
        newNode->next=NULL;
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}

void insert_First(int val){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        newNode->next=NULL;
        head=newNode;
        newNode->prev=NULL;
        tail=newNode;
    }else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        newNode->prev=NULL;
    }
}


void delete_Last(){
    if(head==NULL){
        cout<<"empty\n";
        return;
    }else{
        if(head->next==NULL)
        {
            delete head;
            head=tail=NULL;
            return;
        }else{
           tail=tail->prev;
           delete tail->next;
           tail->next=NULL;
        }
    }
}


void delete_First(){
    if(head==NULL){
        cout<<"empty\n";
        return;
    }else{
        if(head->next==NULL){
            delete head;
            head=tail=nullptr;
            return;
        }else{
            head=head->next;  
            delete head->prev;
            head->prev=NULL;
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
    newNode->prev=NULL;
}else{
    Node*Current=head->next; //!مهم وهتفرق جدا في ال سيركيل
    while(Current!=NULL){
        if(Current->value!=el){
            Current=Current->next;
        }else{
            break;
        }
    }
    if(Current==NULL){
        cout<<"Not found\n";
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