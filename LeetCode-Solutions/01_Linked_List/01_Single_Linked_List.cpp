
#include <iostream>
using namespace std;
class Node
{
public:
    int value ;
    Node *next ;
};
Node *head = NULL;
Node *tail = NULL;

void display()
{
    Node *Current = head;
    while (Current != NULL)
    {
        cout << Current->value << " ";
        Current = Current->next;
    }
    cout << endl;
}



void insert_Last(int val){
    Node*newNode=new Node;
     newNode->value=val;

     if(head==NULL){
        newNode->next=NULL;
        head=newNode;
        tail=newNode;
     }else{
        newNode->next=NULL;
        tail->next=newNode;
        tail=newNode;
     }
}

void insert_First(int val){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL)
    {
        newNode->next=NULL;
        head=newNode;
        tail=newNode;
    }else{
        newNode->next=head;
        head=newNode;

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
                Node*Current=head;
                while(Current->next->next!=NULL)
          {
    Current=Current->next;
         }
         delete Current->next;
         Current->next=NULL;
         tail=Current;
         return;
            }
        }
}

void delete_First(){
    if(head==NULL){
        cout<<"empty \n";
        return;
    }else{
        if(head->next==NULL){
            delete head;
            head=tail=NULL;
            return;
        }else{
            Node*Current=head;
            head=head->next;
            delete Current;
        }
    }
}




void insert_Before(int val,int el){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        cout<<"Linked_List empty\n";
        delete newNode;
        return;
    }
    else
    {
        if(head->value==el){
            newNode->next=head;
            head=newNode;
        }else{

         Node*Current=head;
         while(Current->next!=NULL)
         {
            if(Current->next->value!=el){
                Current=Current->next;
            }else{
              break;
            }
         }
         if(Current->next==NULL){
            cout<<"NotFound\n";
            delete newNode;
            return;
         }else{
            newNode->next=Current->next;
            Current->next=newNode;
         }

        }

    }

/*
//*طريقة تانية وهي ان بيونتر يقف عند الرقم وبينتر تاني يقف قبل البوينتر وتضيف وتربط
            Node*Current=head;
            while(Current!=NULL){
                if(Current->value!=el){
Current=Current->next;
                }else{
                    break;
                }
            }
            if(Current==NULL){
                cout<<"Not_Found\n";
                delete newNode;
                return;
            }else{
             Node*temp=head;
             while(temp->next!=Current){
                temp=temp->next;
             }
             newNode->next=Current;
             temp->next=newNode;
            }
        }
    }
}

*/

}

void insert_After(int val , int el){
    Node*newNode=new Node;
    newNode->value=val;

    if(head==NULL){
        cout<<"empty";
        delete newNode;
        return;
    }else{
        Node*Current=head;
        while(Current!=NULL){
            if(Current->value!=el){
                Current=Current->next;
            }
            else{
                break;
            }
        }
       
        if(Current==NULL){
            cout<<"NotFound\n";
            delete newNode;
            return;
        }else if(Current->next==NULL){
              newNode->next=NULL;
              tail->next=newNode;
              tail=newNode;
        }else{
          newNode->next = Current->next;
          Current->next=newNode;
        }
    }
}






int main()
{
    return 0;
}