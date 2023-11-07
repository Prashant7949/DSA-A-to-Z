#include<bits/stdc++.h>
using namespace std;


class Node{

public:
    //This is creationn of first node
    int data;
    //This is stored address of first node
    Node* next;


    //Here we use parameterize costructor to get the value of data;
    // we also pointing initially address stored in each node toward null
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

// function to print linkedlist by triversing whole linked list
void printLL(Node* head){
    //Temp address to trivese the whole linked list
    Node*temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main(){
    
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;
    printLL(head);

    
    return 0;
}
