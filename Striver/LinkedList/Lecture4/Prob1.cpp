/*
You are given the head_ref of a doubly Linked List and a Key. Your task is to delete all occurrences of the given key if it is present and return the new DLL.

Example1:

Input: 
2<->2<->10<->8<->4<->2<->5<->2
2
Output: 
10<->8<->4<->5
Explanation: 
All Occurences of 2 have been deleted.

Example2:

Input: 
9<->1<->3<->4<->5<->1<->8<->4
9
Output: 
1<->3<->4<->5<->1<->8<->4
Explanation: 
All Occurences of 9 have been deleted.
Your Task:

Complete the function void deleteAllOccurOfX(struct Node** head_ref, int key), which takes the reference of the head pointer and an integer value key. Delete all occurrences of the key from the given DLL.

Expected Time Complexity: O(N).

Expected Auxiliary Space: O(1).

Constraints:

1<=Number of Nodes<=105

0<=Node Value <=109

*/

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int data){
        this ->data = data;
        this ->prev = NULL;
        this -> next = NULL;
    };
};

Node* delOccurances(Node* &head , int key){
    if(head -> data == key){
        delete head;
        return NULL;
    };

    Node* temp = head;
    while(temp != NULL){
        if(temp ->data == key){
            Node* forward = temp->next;
            temp -> prev -> next = temp ->next;
            temp ->next ->prev = temp ->prev;
            temp -> next = NULL;
            temp ->prev = NULL;
            delete temp;
            temp = forward;
        };
    }
}

int main(){
    
    return 0;
}