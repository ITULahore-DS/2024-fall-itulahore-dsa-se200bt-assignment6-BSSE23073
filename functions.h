//
// Created by APPLE on 27/09/2024.
//

#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23073_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23073_FUNCTIONS_H


class Node{
    int data;
    Node* next;
public:
    Node();
    ~Node();

    void setNext(Node* newNode);
    Node* getNext();

    void setData(int data);
    int getData();

};

class Stack{
    Node* top;
    int count;
public:
    Stack();
    ~Stack();
    bool isEmpty(); //checking the stack is it empty
    void push(int data); // adding element to stack
    void pop(); // removing element from stack
    int peek(); // checking the starting index of stack
    int size(); // gives the size of stack
    void clear(); //clears the stack
    void printStack(); //prints the stack
};

class Queue{
    Node* tail;
    Node* head;
    int count;
public:
    Queue();
    ~Queue();
    bool isEmpty(); // checking the queue is it empty
    void enqueue(int data); // adding element in queue
    void dequeue(); // removing element from queue
    int size(); // gives the size of queue
    void clear(); //clears all queue
    void printQueue(); //prints queue
};


#endif //INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23073_FUNCTIONS_H
