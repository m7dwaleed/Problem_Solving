    #include<iostream>
    using namespace std;

    class Node{
    public:
    int value;
    Node*next;
    };


    class LinkedListStack{
    private:
    Node* top;
    public:
    LinkedListStack(){
        top=NULL;
    }

    void push(int val){
        Node*newNode=new Node;
        newNode->value=val;

        newNode->next=top;
        top=newNode;
        
    }

    int pop(){
        if(top==NULL){
            cout<<"empty\n";
            return -1;
        }
    else{
        int deleteValue=top->value;
        Node*temp=top;
        top=top->next;
        delete temp;

    return deleteValue;
    }
    }
    int peek(){
        if(top==NULL) {
        cout<<"empty\n";
            return -1;
        }
    else{

        return top->value;
    }
    }
    void display()
    {
         if(top==NULL) {
        cout<<"empty\n";
            return;
        }
        Node*Current=top;
        while(Current!=NULL){
            cout<<Current->value <<" ";
            Current=Current->next;
        }
        cout<<endl;
    }
    };


    int main(){

        return 0;
    }