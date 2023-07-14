#include <iostream>
#include "Node.h"
using namespace std;

template <typename T>
Node<T>::Node() {}
template <typename T>
Node<T>::Node(T d) : data(d), next(nullptr), prev(nullptr) {}

template <typename T>
DoublyList<T>::DoublyList() : head(nullptr), tail(nullptr) {}

template <typename T>
void DoublyList<T>::push(T data)
{
    Node<T> *ptr = new Node<T>(data);
    if (!head)
    {
        head = ptr;
        tail = ptr;
    }
    else
    {
        tail->next = ptr;
        ptr->prev = tail;
        tail = ptr;
    }
}

template <typename T>
void DoublyList<T>::printList()
{
    Node<T> *ptr = head;
    while (ptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

template <typename T>
void DoublyList<T>::printReverseList()
{
    Node<T> *ptr = tail;
    while (ptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->prev;
    }
    cout << endl;
}
