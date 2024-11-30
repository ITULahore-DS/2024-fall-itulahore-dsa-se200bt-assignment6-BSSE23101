#include "functions.h"

Node::Node()
{
    data = 0;
    next = NULL;
}
Node::~Node()
{
}
int Node::getData()
{
    return data;
}

void Node::setData(int dataValue)
{
    data = dataValue;
}

Node *Node::getNext()
{
    return next;
}

void Node::setNext(Node *nextNode)
{
    next = nextNode;
}

Stack::Stack()
{
    top = NULL;
    count = 0;
}

Stack::~Stack()
{
    clear();
}

bool Stack::isEmpty()
{
    if (top == nullptr)
    {
        return true;
    }
    return false;
}

void Stack::push(int data)
{
    Node *newNode = new Node();
    newNode->setData(data);
    newNode->setNext(top);
    top = newNode;
    count++;
}

void Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return;
    }
    Node *temp = top;
    top = top->getNext();
    delete temp;
    count--;
}

int Stack::peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return top->getData();
}

int Stack::size()
{
    return count;
}

void Stack::clear()
{
    while (!isEmpty())
    {
        pop();
    }
}

void Stack::printStack()
{
    Node *current = top;
    while (current != nullptr)
    {
        cout << current->getData() << endl;
        current = current->getNext();
    }
    cout << endl;
}

Queue::Queue()
{
    top = nullptr;
    count = 0;
}

Queue::~Queue()
{
    while (!isEmpty()) {
        dequeue(); 
    }
}

bool Queue::isEmpty()
{
    if (top == nullptr)
    {
        return true;
    }
    return false;
}

void Queue::enqueue(int data)
{
    Node *newNode = new Node();
     newNode->setData(data);
        newNode->setNext(nullptr);
    if (isEmpty())
    {
        top = newNode;
    }
    else
    {
        Node *current = top;
        while (current->getNext() != nullptr)
        {
            current = current->getNext();
        }
        current->setNext(newNode);
    }
    count++;
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return ;
    }
    Node *temp = top;
    top = top->getNext();
    delete temp;
    count--;
}

int Queue::size()
{
    return count;
}

int Queue::peek()
{
     if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return top->getData();
}

void Queue::printQueue()
{
    Node *temp = top;
    while (top != nullptr)
    {
        cout << temp->getData() << endl;
        temp = temp->getNext();
    }
    cout << endl;
}
