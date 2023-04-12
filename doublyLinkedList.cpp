#include<iostream>

using namespace std;

class Node{
public:
    int info;
    Node *prev;
    Node *next;
};

void creation(Node **head, int data){
    Node *ptr= new Node;
    ptr->info = data;
    ptr->next = nullptr;
    ptr->prev = nullptr;
    if(*head==NULL){
        *head = ptr; 
    }
    else{
        Node *temp;
        temp= *head;
        while (temp->next!=nullptr)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp; 
    }
}


void firstInsert(Node **head, int data){
    Node *ptr = new Node;
    ptr->info = data;
    ptr->next = *head;
    (*head)->prev = ptr; 
    *head = ptr; 
}

void lastInsertion(Node **head, int data){
    creation(head,data); 
}

void firstDelete(Node **head){
    *head = (*head)->next;
    (*head)->prev = nullptr; 
}

void lastDelete(Node **head){
    Node *tail = *head;
    while (tail->next!=nullptr)
    {
        tail=tail->next;
    }
    tail = tail->prev; 
    tail->next = nullptr; 
}


void deleteData(Node **head, int search){
    Node *ptr = *head;
    while (ptr!=nullptr)
    {
        if((ptr->info)==search){
            if(ptr->next==nullptr)  {lastDelete(head); return;}
            else if(ptr->prev==nullptr) {firstDelete(head);return;}
            else{
                (ptr->prev)->next = ptr->next; 
                (ptr->next)->prev = ptr->prev; 
                return; 
            }
        }
        else{ 
            ptr = ptr->next; 
        }
    }
    return; 
}


void printList(Node **head){
    Node *ptr = *head;
    while (ptr!=nullptr)
    {
        cout<< ptr->info<< " ";
        ptr = ptr->next; 
    }
    cout<< endl; 
}

void printReverseList(Node **head){
    Node *ptr = *head;
    while (ptr->next!=nullptr)
    {
        ptr = ptr->next;
    }
    Node *tail = ptr; 
    while (tail!=nullptr)
    {
        cout<< tail->info<< " ";
        tail = tail->prev; 
    }
    cout<< endl; 
}

bool isPalindrome(Node **head){
    Node *tail = *head;
    while(tail->next!=nullptr)  tail = tail->next;
    Node *ptr = *head;
    bool palindrome = true; 
    while (ptr!=nullptr && tail!=nullptr)
    {
        if((ptr->info)!=(tail->info)){
            palindrome = false;
            break;
        }
        ptr = ptr->next;
        tail = tail->prev; 
    }
    return palindrome; 
}

int main(){
    Node *head = nullptr;
    creation(&head,1);
    creation(&head,2);
    creation(&head,3);
    creation(&head,2);
    creation(&head,1);
    printList(&head); 
    firstDelete(&head);
    printList(&head); 
    lastDelete(&head); 
    printList(&head); 
    firstInsert(&head,1);
    printList(&head);
    lastInsertion(&head,1);
    printList(&head); 
    deleteData(&head,3); 
    printList(&head); 
    if(isPalindrome(&head))    cout<< "yes yes"<< endl;
    else    cout<< "No"<< endl; 
    return 0;
}