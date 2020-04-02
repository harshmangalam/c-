#include <iostream>
#define CAPACITY 5
using namespace std;
class Store


{
private:
    int store[CAPACITY];
    int top = -1;
    int i;

public:
    int isFull();
    int checkEmpty();
    void push(int);
    void pop();
    void peek();
    void traverse();
};

int Store ::isFull()
{
    if (top == CAPACITY - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Store ::checkEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Store ::push(int item)
{
    if (isFull())
    {
        cout << "store is full" << endl;
    }
    else
    {
        top++;
        store[top] = item;
        cout << "item added to store" << endl;
    }
}
void Store ::pop()
{
    if (checkEmpty())
    {
        cout << "store is Empty" << endl;
    }
    else
    {
        int removed = store[top--];
        cout << remove << "removed from store" << endl;
    }
}

void Store ::peek()
{
    if (checkEmpty())
    {
        cout << "store is empty" << endl;
    }
    else
    {
        cout << store[top] << " is peek item" << endl;
    }
}
void Store ::traverse()
{
    if (checkEmpty())
    {
        cout << "no any item to store" << endl;
    }
    else
    {
        cout << "Item in Store" << endl;
        for (i = 0; i <= top; i++)
        {
            cout << store[i] << "\t";
        }
    }
}
int main()
{
    Store mystore;
    int loop = 1;
    int option;
    int item;
    while (loop)
    {

        cout << "select choice" << endl;
        cout << "1. pop" << endl;
        cout << "2. push" << endl;
        cout << "3. traverse" << endl;
        cout << "4. peek" << endl;
        cout << "0. Quit" << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            mystore.pop();
            break;

        case 2:
            cout << "Enter Item to store" << endl;
            cin >> item;
            mystore.push(item);
            break;

        case 3:
            mystore.traverse();
            break;

        case 4:
            mystore.peek();
            break;
        case 0:

            loop = 0;
            break;

        default:
            cout << "unknown option" << endl;
            break;
        }
    }
}