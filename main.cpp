#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//This is for a list
 using namespace std;

struct Node{
    int data;
    Node* next;
};

void Print(Node* head){
    Node* temp = head;
    cout<<"THe list is:";
    while (temp != nullptr){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    cout<<"\n";
};
Node* Insert(Node* head, int x)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = head;
    head = temp;
    return  head;
};
int main() {
    /*Code*/
    Node* head = nullptr;
    cout<<"How many numbers sos you want? \n";
    int n, i, x;
        cin>> n;
    for (i = 0;  i< n; i++) {
        cout<<"Enter the numbers \n";
        cin>> x;
        head = Insert(head, x);
        Print(head);
    }
}