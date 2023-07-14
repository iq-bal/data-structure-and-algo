#include<iostream>
#include "Node.h"

using namespace std;

int main(){
    DoublyList<int> list;
    int n;  cin>>n;
    while (n--)
    {
        int data;   cin>>data;
        list.push(data);
    }
    list.printList();
    list.printReverseList(); 
    return 0;
}