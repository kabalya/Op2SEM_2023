#ifndef LAB5_STACK_H
#define LAB5_STACK_H

#include <iostream>
#include "StackExceptions.h"
#include "EmptyStackException.h"
#include "StackOverflowException.h"

struct Node {
    int data;
    Node* next;
};

template<class T>
class Stack {
private:
    T* top;
    int size;
public:
    Stack();

    void push(T elem);

    T pop();

    bool isEmpty();
    bool isFull();

    int StackSize(Stack);

};


#endif //LAB5_STACK_H