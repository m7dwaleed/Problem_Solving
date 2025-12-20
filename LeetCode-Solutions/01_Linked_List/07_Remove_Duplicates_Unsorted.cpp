#include <iostream>
using namespace std;

#include <unordered_set>
class ListNode
{
public:
        int val;
        ListNode *next;
};

void deleteDuplicatesUnoreder(ListNode *head)
{
        if (head == NULL)
        {
                return;
        }
        unordered_set<int> seen;
        ListNode *Current = head;
        ListNode *Prev = NULL;
        while (Current != NULL)
        {
                if (seen.find(Current->val) != seen.end())
                {
                        Prev->next = Current->next;
                        delete Current;
                        Current = Prev->next;
                }
                else
                {
                        seen.insert(Current->val);
                        Prev = Current;
                        Current = Current->next;
                }
        }
}

void insert_Last(ListNode *&head, ListNode *&tail, int value)
{

        ListNode *newNode = new ListNode;
        newNode->val = value;

        newNode->next = NULL;

        if (head == NULL)
        {
                head = tail = newNode;
        }
        else
        {
                tail->next = newNode;
                tail = newNode;
        }
}

void display(ListNode *head)
{
        ListNode *Current = head;
        while (Current != NULL)
        {
                cout << Current->val << " ";
                Current = Current->next;
        }
        cout << endl;
}

int main()
{

        ListNode *head = NULL;
        ListNode *tail = NULL;

        insert_Last(head, tail, 1);
        insert_Last(head, tail, 1);
        insert_Last(head, tail, 2);
        display(head);

        deleteDuplicatesUnoreder(head);
        display(head);
        return 0;
}