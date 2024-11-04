#include<iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    };
};


Node* arrayToLL(int arr[],int length){
    if(length == 0){
        return NULL;
    }

    Node* head = new Node(arr[0]);
    Node* current = head;

    for(int i =1 ;i<length;i++){
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

void traverseLL (Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* insertionAtEnd(Node* &tail,int data){
    Node* temp = new Node(data);
   tail->next = temp;
   tail = temp;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToLL(arr, n);

    // Print the linked list
    traverseLL(head);
    return 0;
}