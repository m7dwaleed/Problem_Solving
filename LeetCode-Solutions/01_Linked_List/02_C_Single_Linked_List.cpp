#include<iostream>
using namespace std;

class Node{
public:
int value;
Node*next;

};
Node *head=NULL;
Node *tail=NULL;




void display(){
  Node *Current=head;
  if(head==NULL){
    cout<<"Linked_list empty\n";
    return;
  }

  do{
    cout<<Current->value<<" ";
    Current=Current->next;
  }while(Current!=head);
}

void insert_Last(int val)
{
    Node *newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        newNode->next=newNode;
        head=newNode;
        tail=newNode;
        return;
    }else{
        newNode->next=head;
        tail->next=newNode;
        tail=newNode;
    }
}

void insert_First(int val){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        newNode->next=newNode;
        head=newNode;
        tail=newNode;
    }else{
        newNode->next=head;
        head=newNode;
        tail->next=head;
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
            Node*Current=head;
            while(Current->next->next!=head)
            {
                   Current=Current->next;
            }
            delete Current->next;
            Current->next=head;
            tail=Current;
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
            return;
        }else{
            Node*Current=head;
            head=head->next;
            tail->next=head;
            delete Current;
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
            head=newNode;
            tail->next=head;
        }else{
            Node*Current=head;
            while(Current->next!=head){
            if(Current->next->value !=el){
                Current=Current->next;
            }else{
                break;
            }
        }
        if(Current->next==head){
             cout<<"NotFound\n";
             delete newNode;
             return;
        }else{
        newNode->next=Current->next;
        Current->next=newNode;
        }
    }
    }
}

void insert_After(int val , int el){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        cout<<"empty\n";
        delete newNode;
        return;
    }else {
        Node*Current=head;
    }
}

int main()
{


    return 0;
}