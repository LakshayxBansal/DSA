#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    };
};


Node* reverseIterationLL(Node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* current = head;

    while(current != NULL){
        Node* forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    return prev;
};



int main () {
    return 0;
}