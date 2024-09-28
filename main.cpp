//
// Created by APPLE on 27/09/2024.
//
#include <iostream>
#include "functions.h"
using namespace std;


int main() {
    Stack stack;
    Queue queue;
    int choice;
    int data;

    do {
        cout<<"Select an option:"<<endl;
        cout<<"1. Push to Stack"<<endl;
        cout<<"2. Pop from Stack"<<endl;
        cout<<"3. Print Stack"<<endl;
        cout<<"4. Enqueue to Queue"<<endl;
        cout<<"5. Dequeue from Queue"<<endl;
        cout<<"6. Print Queue"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Enter data to push: ";
                cin>>data;
                stack.push(data);
                break;
            case 2:
                stack.pop();
                cout<<"Popped from stack"<<endl;
                break;
            case 3:
                cout<<"Current Stack: ";
                stack.printStack();
                cout<<endl;
                break;
            case 4:
                cout<<"Enter data to enqueue: ";
                cin>>data;
                queue.enqueue(data);
                break;
            case 5:
                queue.dequeue();
                cout<<"Dequeued from queue"<<endl;
                break;
            case 6:
                cout<<"Current Queue: ";
                    queue.printQueue();
                break;
            case 0:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice, try again."<<endl;
        }
    } while (choice != 0);
    return 0;
}

