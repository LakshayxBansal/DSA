#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    };
};

void traverseLL(Node* &head){
    Node* t1 = head;
    while(t1 != NULL){
        cout<< t1->data<< " ";
        t1 = t1->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail-> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &tail , Node* &head , int position,int data){


    // Insertion at beginning
    if(position == 1){
        insertAtHead(head,data);
        return;
    }

    //Insertion at specific
    int count = 1;
    Node* temp = head;
    while(count != position-1){
        temp = temp -> next;
        count++;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp->next;
    temp -> next = nodeToInsert;

    //Insertion at Tail

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }
}


int main () {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    traverseLL(head);

    insertAtTail(tail ,12);
    traverseLL(head);

   insertAtTail(tail ,15);
    traverseLL(head); 

    insertAtPosition(tail,head,1,2);
    traverseLL(head);

    insertAtPosition(tail,head,5,23);
    traverseLL(head); 

    insertAtPosition(tail,head,6,26);
    traverseLL(head); 

    return 0;
}