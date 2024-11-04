#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    //Constructor
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    };

    void push(int elements){
        if(size - top >1){
            top++;
            arr[top] = elements;
        }else{
            cout<< "Stack overflow"<<endl;
        }
    };

    void pop(){
        if(top >= 0){
            top --;
        }else{
            cout<<"Stack underflow" << endl;
        }
    };

    int peek(){
        if(top >=0){
            return arr[top];
        }else{
            cout<< "Stack is empty"<<endl;
            return -1;
        }
        
    };

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    };
};

int main(){
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.peek()<<endl;
    st.push(4);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;
    return 0;
}