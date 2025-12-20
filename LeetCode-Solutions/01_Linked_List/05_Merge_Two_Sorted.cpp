#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void print(Node *head)
{
    Node *Current = head;
    while (Current != NULL)
    {
        cout << Current->value;
        Current = Current->next;
    }
    cout << endl;
}

void push(Node *&head, Node *&tail, int val)

{
    Node *newNode = new Node();
    newNode->value = val;
    if (head == NULL)
    {
        newNode->next = NULL;
        head = tail = newNode;
    }
    else
    {
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

Node *merge(Node *head1, Node *head2)
{
    Node *new_head = NULL;
    Node *tail = NULL;
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    if (head1 && head2)
    {
        if (head1->value <= head2->value)
        {
            new_head = tail = head1;
            head1 = head1->next;
        }
        else
        {
            new_head = tail = head2;
            head2 = head2->next;
        }
    }

    while (head1 && head2)
    {
        if (head1->value <= head2->value)
        {
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
        }
    }
    if (head1)
        tail->next = head1;
    else if (head2)
        tail->next = head2;

    return new_head;
}

int main()
{
  Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    push(head1, tail1, 1);
    push(head1, tail1, 3);
    push(head1, tail1, 5);

    push(head2, tail2, 2);
    push(head2, tail2, 4);
    push(head2, tail2, 6);

    cout << "List 1: ";
    print(head1);

    cout << "List 2: ";
    print(head2);

    Node *merged = merge(head1, head2);

    cout << "Merged List: ";
    print(merged);
}