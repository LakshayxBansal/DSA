#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    };

    ~Node(){
        int val = this->data;
        if(next!= NULL){
            delete next;
            next = NULL;
        }
        cout<< "Memory free for node with data "<< val << endl;
    };
};

void traverseLL(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }

    cout << endl;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(data);
        temp -> next = head;
        head ->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}


void insertAtPosition(Node* &head, Node* &tail,int position,int data){
    if(position == 1){
        insertAtHead(head,tail,data);
        return ;
    }

    Node* temp = head;
    int count = 1;

    while(count< position-1){
        temp = temp ->next;
        count++;
    };


    if(temp -> next == NULL){
        insertAtTail(head,tail,data);
        return ;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp->next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert->prev = temp;

}


void deleteNode(Node* &head,Node* &tail,int position){
    if(position == 1){
        Node* temp = head;
        if(head -> next == NULL){
            head = NULL;
            tail = NULL;
        }else{
            head = head->next;
            head -> prev = NULL;
            temp -> next = NULL;
        }
        delete temp;
        return;
    }

    Node* current = head;
    int count =1;

    while(count < position) {
        current = current->next;
        count++;
    }

    if(current -> next == NULL){
        tail = current -> prev;
        tail -> next = NULL;
    }else{
        current -> prev ->next = current ->next;
        current -> next -> prev = current -> prev;
    }
    current->next = NULL;
    current ->prev = NULL;
    delete current;
}

int main(){
    Node* node1 = new Node(12);
    Node* head = node1;
    Node* tail = node1;
    traverseLL(head);

    insertAtHead(head,tail,8);
    insertAtPosition(head,tail,3,7);
    traverseLL(head);

    insertAtTail(head,tail,18);
    traverseLL(head);

    insertAtPosition(head,tail,3,10);
    traverseLL(head);
    deleteNode(head,tail,6);
    traverseLL(head);

    return 0;
}