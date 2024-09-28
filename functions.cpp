//
// Created by APPLE on 27/09/2024.
//
#include <iostream>
#include "functions.h"
using namespace std;

Node::Node()
{
    data = 0;
    next=nullptr;
}

Node::~Node()
{

}

void Node::setNext(Node* newNode)
{
    next = newNode;
}
Node *Node::getNext()
{
    return next;
}

void Node::setData(int data)
{
    this->data=data;
}

int Node::getData()
{
    return data;
}

Stack::Stack() //constructor of stack
{
    top = new Node;
    count = 0;
}
Stack::~Stack() // destructor of stack
{
    Node* current=top;
    Node* nextNode=nullptr;
    while (current!=nullptr)
    {
        nextNode= current->getNext();
        delete current;
        current = nextNode;
    }
}
bool Stack::isEmpty()
{
    return count == 0;
}

void Stack::push(int data) //pushing the element at the start of the stack
{
    Node* temp = new Node;
    temp->setData(data);
    temp->setNext(top);
    top = temp;
    temp = nullptr;
    ++count;
}

void Stack::printStack() // displays the stack
{
    for (int i = 0; i < count; ++i) {
        cout<<top->getData()<<" ";
        top=top->getNext();
    }
}
int Stack::peek()   // checking the starting index of stack
{
    if (!isEmpty())
        return top->getData();
    else
        cout<<"Stack is empty";
    return -1;
}

void Stack::pop() // removing the element fromm the top of the stack
{
    if (!isEmpty()){
        top=top->getNext();
        --count;
    }
    else
        cout<<"Stack is empty";
}

void Stack::clear() // clears the stack
{
    top=nullptr;
    count=0;
}
int Stack::size()
{
    return count;
}

Queue::Queue() // constructor of queue
{
    tail = new Node;
    head = new Node;
    count=0;
}
Queue::~Queue() // destructor of queue
{
    Node* current = head;
    Node* nextNode = nullptr;

    while (current != nullptr) {
        nextNode = current->getNext();
        delete current;
        current = nextNode;
    }

    head = nullptr;
    tail = nullptr;
    count = 0;
}

bool Queue::isEmpty()
{
    return count==0;
}

int Queue::size() {
    return count;
}

void Queue::enqueue(int data) //adding element to the end of queue
{
    Node* newNode = new Node;
    newNode->setData(data);
    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        tail->setNext(newNode);
        tail = newNode;
    }
    count++;
}

void Queue::dequeue() // removing element from the starting of the queue
{
    if (isEmpty())
    {
        cout<<"Queue is empty";
        return;
    }
    Node* temp = new Node;
    temp =head;
    head = head->getNext();
    delete temp;
    --count;
}

void Queue::clear() { //clears all queue
    head = tail = nullptr;
    count=0;
}

void Queue::printQueue() //prints queue
{
    if (isEmpty()) {
        cout<<"Queue is empty.\n";
        return;
    }
    Node* current = head;
    while (current != nullptr) {
        cout<<current->getData()<<" ";
        current = current->getNext();
    }
    cout<<endl;
}
