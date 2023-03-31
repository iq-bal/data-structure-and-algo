#include<iostream>

using namespace std;


class Node{
public:
    int data;
    Node *link;
};

void creation(Node **head,int data){
    Node *ptr = new Node;
    ptr->data=data;
    ptr->link=NULL;
    if(*head==NULL) *head=ptr;
    else{
        Node *temp;
        temp= *head;
        while (temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr;
    }
}

void firstInsertion(Node **head,int data){
    Node *ptr= new Node;
    ptr->data = data;
    ptr->link = *head;
    *head = ptr; 
}

void beforeInsertion(Node **head,int data,int search){
    Node *ptr=new Node;
    ptr->data = data;
    ptr->link = NULL;
    Node *temp,*src;
    temp=*head;
    while (temp!=NULL)
    {
        if(temp->data==search){
            if(temp==*head){
                firstInsertion(head,data);
                return;
            }
            else{
                src->link = ptr;
                ptr->link = temp; 
                return; 
            }
        }
        else{
            src = temp; 
            temp=temp->link;
        }
    }
    return; 
}

void afterInsertion(Node **head, int data, int search){
    Node *ptr = new Node;
    ptr->data = data;
    ptr->link = NULL;
    Node *temp, *src;
    temp = *head;
    while (temp!=NULL)
    {
        src = temp->link; 
        if(temp->data==search){
            if(temp->link==NULL){
                creation(head,data);
                return;
            }
            else{
                temp->link = ptr;
                ptr->link = src; 
                return;
            }
        }
        else{
            temp=temp->link; 
        }
    }
    return; 
}

void deleteFirst(Node **head){
    *head = (*head)->link; 
}

void deleteLast(Node **head){
    Node *ptr,*src; 
    ptr = *head;
    
    while (ptr->link!=NULL)
    {
        src = ptr; 
        ptr=ptr->link; 
    }
    src->link = NULL;
}

void mergeList(Node **head1, Node **head2){
    Node *temp = *head1;
    while (temp->link!=NULL)
    {
        temp = temp->link; 
    }
    temp->link = *head2; 
}

void suffleMerge(Node **head1, Node **head2){
    Node *ptr = *head1; 
    while ((*head2)!=NULL && head1!=NULL)
    {
        (*head1)->link= *head2;
        *head2 = (*head2)->link; 
        (*head2)->link = (*head1)->link; 
        *head1 = (*head1)->link; 
    }
    *head1 = ptr; 
}

void printList(Node **head){
    Node *ptr=*head;
    while (ptr!=NULL)
    {
        cout<< ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<< endl; 
}

int main(){
    // Node *head1;
    // head1 = NULL; 
    // creation(&head1,5);
    // creation(&head1,7);
    // creation(&head1,9);

    // Node *head2;
    // head2 = NULL;

    // creation(&head2,11);
    // creation(&head2,13);
    // creation(&head2,15); 

    // mergeList(&head1,&head2);
    // printList(&head1); 
    // beforeInsertion(&head,6,7);
    // afterInsertion(&head,8,7); 
    // deleteFirst(&head); 
    // deleteLast(&head); 
    // printList(&head);
    return 0;
}