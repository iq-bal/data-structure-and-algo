// simple array implementation
#include<iostream>
#define size 10
using namespace std;

bool isEmpty(int front, int rear){
    return (front==-1 && rear==-1);
}
bool isFull(int rear){
    return (rear==size-1);
}

void inqueue(int arr[], int val, int &front, int &rear){
    if(isEmpty(front,rear)){
        front=0;
        rear =0;
        arr[rear]=val;
    }
    else if(isFull(rear)){
        cout<< "full"<< endl;
    }
    else{
        rear++;
        arr[rear]=val; 
    }
}

void dequeue(int arr[], int &front, int &rear){
    if(isEmpty(front,rear)) cout<< "empty" <<endl;
    else if(front==rear){
        front=-1;
        rear=-1; 
    }
    else{
        front++; 
    }
}

void frontELement(int arr[],int &front,int &rear){
    if(isEmpty(front,rear)) cout<< "nai"<<endl;
    else{
        cout<< arr[front]<<endl;
    }
}

void rearElement(int arr[],int &front, int &rear){
    if(isEmpty(front,rear)) cout<< "nai"<<endl;
    else{
        cout<< arr[rear]<< endl; 
    }
}

int main(){
    int front =-1, rear =-1; 
    int arr[size];
    inqueue(arr,5,front,rear);
    inqueue(arr,7,front,rear);
    inqueue(arr,12,front,rear);

    rearElement(arr,front,rear); 
    frontELement(arr,front,rear); 
    dequeue(arr,front,rear); 
    frontELement(arr,front,rear); 
    dequeue(arr,front,rear);
    dequeue(arr,front,rear); 
    frontELement(arr,front,rear); 
    rearElement(arr,front,rear);
    return 0;
}