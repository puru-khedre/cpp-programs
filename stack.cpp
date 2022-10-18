#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *arr = NULL;

public:
    Stack(int n)
    {
        size = n;
        arr = new int[n];
        top = -1;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }
    bool isFull()
    {
        if (top == size - 1)
            return true;
        return false;
    }
    void PUSH(int n)
    {
        if (isFull())
        {
            cout << "Stack is fully filled." << endl;
        }
        else
        {
            *(arr + (++top)) = n;
        }
    }
    int POP()
    {
        if (isEmpty())
        {
            cout << "The Stack is already empty." << endl;
        }
        else
        {
            return *(arr + (top--));
        }
    }
    void traversal()
    {
        for (int i = 0; i < top + 1; i++)
        {
            cout << *(arr + i) << " ";
        }

        if (isEmpty())
        {
            cout << "The Stack is already empty->" << endl;
        }
        else
            cout << endl;
    }
};

int main()
{
    Stack *stPtr = new Stack(100);
    stPtr->traversal();

    stPtr->PUSH(10);
    stPtr->PUSH(75);
    stPtr->PUSH(23);
    stPtr->PUSH(95);
    stPtr->traversal();

    cout << stPtr->POP() << endl;
    cout << stPtr->POP() << endl;
    cout << stPtr->POP() << endl;
    stPtr->traversal();

    stPtr->PUSH(78);
    stPtr->PUSH(63);
    stPtr->PUSH(225);
    stPtr->PUSH(89);
    stPtr->traversal();

    free(stPtr);
    return 0;
}