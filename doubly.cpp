#include<iostream>

using namespace std;

class Node{
public: 
    int data;
    Node *next, *prev;
    Node(){}
    Node(int d): data(d), next(nullptr), prev(nullptr) {}
}; 

class DoublyList{
protected:
    Node *head;
    Node *tail;
public:
    DoublyList(): head(nullptr), tail(nullptr) {}
    void push(int data){
        Node *node = new Node(data); 
        if(!this->head){
            this->head = node; 
            this->tail = node; 
        }else{
            tail->next = node;
            node->prev = tail; 
            tail = node; 
        }
    }
    void printList(){
        Node *ptr = this->head;
        while (ptr)
        {
            cout<< ptr->data<< " ";
            ptr = ptr->next; 
        }
        cout<< endl; 
    }
    void printReverseList(){
        Node *ptr = this->tail;
        while (tail)
        {
            cout<< tail->data<< " ";
            tail= tail->prev; 
        }
        cout<< endl; 
    }
}; 

int main(){
    DoublyList list;
    list.push(1);
    list.push(2);
    list.printList(); 
}