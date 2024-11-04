#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = next;
    };

    // Destructor 
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        };
        cout << "Memory is free for node with data" << value << endl;
    };
};


void traverseLL(Node* &head){
}

int main(){

}