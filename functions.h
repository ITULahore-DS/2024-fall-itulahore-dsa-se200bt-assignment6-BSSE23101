#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    Node();
    ~Node();
    int getData();
    void setData(int dataValue);
    Node *getNext();
    void setNext(Node *nextNode);
};

class Stack
{
private:
    Node *top;
    int count;

public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int data);
    void pop();
    int peek();
    int size();
    void clear();
    void printStack();
};

class Queue
{
private:
    Node *top;
    int count;

public:
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int size();
     int peek();
    void printQueue();
};
#endif