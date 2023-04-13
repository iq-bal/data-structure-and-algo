#include<iostream>

using namespace std;

#define MAX 50
int idx=-1;
int arr[MAX];

bool isEmpty(){
    return (idx==-1);
}

void push(int val){
    idx++;
    arr[idx]=val;
}

void pop(){
    idx--; 
}

int peek(){
    return arr[idx]; 
}

int main(){
    
    return 0;
}