#include<iostream>
using namespace std;

class Student{
    public: 

    string name;
    string *marksPtr;

    Student(string name,string marks){
        this->name = name;
        marksPtr = new string;
        *marksPtr = marks;
    }

    Student(Student &obj){
        this->name = obj.name;
        marksPtr = new string;
        *marksPtr = *obj.marksPtr;
    }

    void display(){
        cout<<"Name is : "<<name<<endl;
        cout<<"Marks are : "<<*marksPtr<<endl;
    }
};

int main (){
    Student s1("Lakshay","92");
    s1.display();

    Student s2(s1);
    s2.name = "Bansal";
    *(s2.marksPtr) = "98";
    s2.display();
    s1.display();

    return 0;
}

// Deep copy is a type of copy that is created during invokation of copy constructor
// It handles dynamic memory allocation which is drawback of static / shallow copy 
// which uses pointers to target a single memory location , instead of 