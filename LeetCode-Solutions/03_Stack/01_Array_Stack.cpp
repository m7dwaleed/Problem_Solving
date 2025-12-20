#include <iostream>
using namespace std;

const int sz = 5;
template <class T>
class ArrayStack
{

private:
    T stack[sz];
    int top;

public:
    ArrayStack() : top(-1) {};

    bool isFull()
    {
        if (top == sz - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEmpty()
    {
        return top < 0;
    }

    void push(T element)
    {
        if (isFull())
        {
            cout << "Stack Full\n";
            return;
        }
        else
        {
            top++;
            stack[top] = element;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "stack empty\n";
            return 0;
        }
        else
        {
            return stack[top--];
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "stack empty\n";
            return 0;
        }
        else
        {
            return stack[top];
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Empty";
            return;
        }

        cout << "Stack be " << "[ ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << "]";
        cout << endl;
    }
}; 

int main()
{
    ArrayStack <int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    s1.display();
    s1.pop();
    s1.display();
    cout << s1.peek();
    return 0;
}