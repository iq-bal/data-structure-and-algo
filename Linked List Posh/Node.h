#ifndef NODE_H
#define NODE_H
class Node{
public: 
    int data;
    Node *next, *prev;
    Node();
    Node(int d); 
}; 

class DoublyList{
protected:
    Node *head;
    Node *tail;
public:
    DoublyList(); 
    void push(int data); 
    void printList(); 
    void printReverseList(); 
};
#endif

