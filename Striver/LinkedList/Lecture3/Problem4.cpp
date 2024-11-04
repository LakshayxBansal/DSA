#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    };
};

bool isLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast ->next;
        }
    }
}

int main (){

}