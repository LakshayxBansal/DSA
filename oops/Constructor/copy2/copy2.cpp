#include<iostream>
using namespace std;


class Student{
    public:
    string name;
    int age;
    float *numPtr;

    Student(string name, int age,float number){
        this->name = name;
        this -> age = age;
        numPtr = new float;
        *numPtr = number;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->age = obj.age;
        numPtr = new float;
        *numPtr = *obj.numPtr;
    }

    void display(){
        cout<<"name is: "<<name<<endl;
        cout<<"age is: "<<age<<endl;
        cout<<"number are: " << *numPtr<<endl;
    }
};

int main(){
    Student s1("lakshay",23,90.4);
    s1.display();

    Student s2(s1);
    *(s2.numPtr) = 95.99;
    s2.display();
    s1.display();

}