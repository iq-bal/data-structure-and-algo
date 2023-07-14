#ifndef NODE_H
#define NODE_H

template<typename T>
class Node{
public: 
    T data;
    Node *next, *prev;
    Node();
    Node(T d); 
}; 

template<typename T>
class DoublyList{
protected:
    Node<T> *head;
    Node<T> *tail;
public:
    DoublyList(); 
    void push(T data); 
    void printList(); 
    void printReverseList(); 
};
#include "Node.cpp"
#endif

