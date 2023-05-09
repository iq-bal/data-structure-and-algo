#include<iostream>

using namespace std;

const int N=5; 

int front =-1;
int rear = -1; 

bool isEmpty(){
    return (front==-1 && rear==-1); 
}

bool isFull(){
    return ((rear+1)%N == front); 
}

void enqueue(int *arr, int data){
    if(isEmpty()){
        front++;
        rear++;
        arr[rear]=data; 
    }
    else if(isFull()){
        return; 
    }
    else{
        rear = (rear+1)%N;
        arr[rear]=data;
    }
}

void dequeue(int *arr){
    if(isEmpty()){
        return;
    }
    else if(front==rear){
        front=-1;
        rear = -1; 
    }
    else{
        front= (front+1)%N; 
    }
}

void display(){
    
}

int main(){
    
    return 0;
}