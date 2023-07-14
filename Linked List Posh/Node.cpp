#include <iostream>
#include "Node.h"
using namespace std;

Node ::Node(){}
Node ::Node(int d) : data(d), next(nullptr), prev(nullptr) {}

DoublyList::DoublyList() : head(nullptr), tail(nullptr) {}

void DoublyList::push(int data){
    Node *ptr = new Node(data);
    if(!head){
        head = ptr;
        tail = ptr; 
    }else{
        tail->next = ptr;
        ptr->prev = tail;
        tail = ptr; 
    }
}

void DoublyList:: printList(){
    Node *ptr = head;
    while (ptr)
    {
        cout<< ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<< endl; 
}

void DoublyList::printReverseList(){
    Node *ptr=tail;
    while (ptr)
    {
        cout<< ptr->data<< " "; 
        ptr=ptr->prev; 
    }
    cout<< endl; 
}
