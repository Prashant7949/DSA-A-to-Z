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

void insert(Node*&head){
    //step1 - create a new NODE
    Node* newNode = new Node(300);
    //step2-storing head address in new created node
    newNode->next = head;

    //step 3-  changing head position because we are adding node at head
    head = newNode;
}

void insertAtTial(Node* &head, Node* &tail){

    Node* LastNode = new Node(2000);
    tail->next = LastNode;
    tail = LastNode;
}


void delAtHead(Node* &head){
    Node* firstpos = head;

    head = firstpos->next;
    firstpos->next = NULL;

    delete firstpos;
}

int lenght(Node* head){
    Node*len = head;
    int length = 0;
    while (len != NULL)
    {
        length++;
        len = len->next;
    }
    return length;
}


int main(){
    Node* head;
    Node* tail;


    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    head = first;
    cout<<"before inserting"<<endl;
    printLL(head);
    cout<<endl;

    cout<<"inserted a element at head"<<endl;
    insert(head);
    printLL(head);
    cout<<endl;

    cout<<"deleteing data from head"<<endl;
    delAtHead(head);
    printLL(head);
    cout<<endl;
    
    cout<<"inserting data at tial"<<endl;
    tail = fifth;
    insertAtTial(head,tail);
    printLL(head);
    

    int ans = lenght(head);
    cout<<ans;
    
    return 0;
}