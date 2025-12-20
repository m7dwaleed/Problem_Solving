    #include<iostream>
    using namespace std;


    class ListNode{
    public:
    int val;
    ListNode *next;
    };

//*لاحظ لما بنحط & بتبقي اجبارري لو ال هيد هيتغير لكن غير كده وهتغير حاجه الهيد مش هيتغير خالص لكن اي تعديل تاني هيتم بسهوله بس الهيد فقط ال مش هتتغير
    void deleteDuplicates(ListNode* &head){
      if  (head==NULL){
            return;
        }
    ListNode*Current=head;
    ListNode*Temp=NULL;
    while(Current->next!=NULL){
        if(Current->val == Current->next->val){
            Temp=Current->next;
            Current->next=Current->next->next;
            delete Temp;
            
        }else{
        
            Current=Current->next;
            
        }
    }
    
    }

    void insert_Last (ListNode* &head , ListNode* &tail, int value)
    {

        ListNode*newNode=new ListNode;
        newNode->val=value;

        newNode->next=NULL;

        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    

    void display(ListNode*head){
        ListNode*Current=head;
        while(Current!=NULL){
            cout<<Current->val<<" ";
            Current=Current->next;
        }cout<<endl;
    }


    int main(){

    ListNode*head=NULL;
    ListNode*tail=NULL;

    insert_Last(head,tail ,1);
    insert_Last(head,tail ,1);
    insert_Last(head,tail ,2);

    display(head);
    deleteDuplicates(head);
        display(head);

        return 0;
    }