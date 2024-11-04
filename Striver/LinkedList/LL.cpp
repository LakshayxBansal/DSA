#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    //Constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        // memory free
        if(this-> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<< "Memory free for node with data " << value<<endl;
    }
};

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}; 


void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

// Node* insertAtTail(Node* &head,int data){
//     Node* temp = new Node(data);
//     Node* current = head;
//     Node* tail = current;

//     while(current != NULL){
//         if(current->next == NULL){
//             tail = current;
//         }
//         current = current->next;
//     }

//     tail -> next = temp;
//     tail = temp;
//     return tail;
// }

void deleteByPosition(int position , Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else{
        // Deleting middle and last
        Node* current = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position){
            prev = current;
            current = current -> next;
            count ++;
        }
        prev->next = current->next;
        current -> next = NULL;
        delete current;
    }
}

void insertAtPosition(Node* &tail, Node* &head ,int position, int data){

    if(position == 1){
        insertAtHead(head,data);
        if(tail == NULL){
            tail = head;
        }
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count != position-1){
        temp = temp -> next;
        count++;
    }


    if(temp -> next == NULL){
        insertAtTail(tail,data);
        return;
    }

    //Creating a node for data
    Node* nodeToInsert = new Node(data);

    nodeToInsert-> next = temp -> next;
    temp -> next = nodeToInsert; 
    
}

void traverseLL(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data<< " ";
        temp = temp -> next;
    }
    cout << endl;

}


void deleteByValue(){

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

    insertAtPosition(tail,head,1,22);
    traverseLL(head);

    insertAtPosition(tail,head,5,23);
    traverseLL(head); 

    insertAtPosition(tail,head,6,26);
    traverseLL(head);   

    deleteByPosition(4,head);
    traverseLL(head);
    deleteByPosition(4,head);
    traverseLL(head);
    return 0;
}