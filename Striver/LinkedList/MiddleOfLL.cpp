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

//Helper function to find length of the Linked list
int lengthOfLL(Node* &head){
    int length =0 ;
    Node* temp = head;

    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    //Length of the Linked list
    return length;
}

//Function to find middle of Linked list
Node* getMiddle(Node* &head){
    int length = lengthOfLL(head);
    if(length == 0){
        return NULL;
    }
    int midIndex = length/2;
    Node* temp = head;

    while(midIndex > 0){
        temp = temp-> next;
        midIndex --;
    }
    return temp;
}



Node* getMiddle2(Node* &head){
    if( head == NULL || head->next == NULL ){
        return NULL;
    };

    if(head->next->next == NULL){
        return head->next;
    };

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
int main(){

    // A hard-coded linked list:
    // 10 -> 20 -> 30 -> 40 -> 50 -> 60 
     Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    
    Node* middle = getMiddle2(head);
    cout << "The middle node is: " << middle->data << endl;

    return 0;
}