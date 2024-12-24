#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int *salaryPtr;

    Student(string name , int salary){
        this -> name = name;
        salaryPtr = new int;
        *salaryPtr = salary;
    }

    Student(Student &obj){
        this->name = obj.name;
        salaryPtr = new int;
        *salaryPtr = *obj.salaryPtr;
    }

    void getInfo(){
        cout<<"Name is "<<name<< endl;
        cout<<"Salary is: "<< *salaryPtr << endl;
    }
};


class Book{
    public: 
    string *titlePtr;

    Book(string title){
        titlePtr = new string;
        *titlePtr = title;
    }

    Book(Book &obj){
        titlePtr = new string;
        *titlePtr = *obj.titlePtr;
    }

    void display(){
        cout<<"title of the book is : " << *titlePtr <<endl;
    }
};


int main(){
    Book b1("hello kitty");
    b1.display();

    Book b2(b1);
    *(b2.titlePtr) = "itachi uchiha";
    b2.display();

    b1.display();
    return 0;
}