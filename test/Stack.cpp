#include <iostream>
using namespace std;

class Stack
{
private:
    int top = -1;
    int maxStackSize;

    int* arr = new int[maxStackSize];

public:
    Stack(int size);
    void Push(int item);
    void Pop();
    bool IsEmpty();
    bool IsFull();
};

int main()
{
    Stack stack = Stack(2);
    stack.Pop();
    stack.Push(3);
    stack.Push(4);
    stack.Push(2);
    stack.Pop();
    stack.Push(2);
    stack.Pop();
    stack.Pop();
    stack.Pop();

    return 0;
}

Stack::Stack(int size) : maxStackSize(size)
{
}

void Stack::Push(int item)
{
    top++;
    if (IsFull())
    {
        top--;
        cout << "Stack is FULL!" << "\n";
        return;
    }
    arr[top] = item;
    cout << "Push!: " << arr[top] << "\n";
}

void Stack::Pop()
{
    if (IsEmpty())
    {
        cout << "Stack is empty!" << "\n";
        return;
    }
    cout << "Pop!: " << arr[top--] << "\n";
}

bool Stack::IsEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::IsFull()
{
    if (top == maxStackSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}
