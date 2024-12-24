#include<iostream>
using namespace std;

class Car{
    public: 

    string name;
    string model;

    // Default constructor
    Car(){
        name = "Toyota";
        model = "abc";
    }

    //Parametrized Constructor 

    Car(string name , string model){
        this->name = name;
        this -> model = model;

        //Another way 
        // Dereferencing operator
        // (*this).name = name;
        // (*this).model = model;
    }

    //Copy Constructor
    Car(Car &orgObj){
        cout << "I am custom Copy Constructor"<<endl;
        this -> name = orgObj.name;
        this-> model = orgObj.model;
    }

    void display() {
        cout << "Name: " << name << ", Model: " << model << endl;
    }

};

class Student{
    public: 
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){
        this -> name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout << "name :"<< name << endl;
        cout<< "Cgpa :" << *cgpaPtr << endl;
    }
};

class Teacher{
    public:
    string name;
    float *salaryPtr;

    Teacher(string name, float salary){
        this->name = name;
        salaryPtr = new float;
        *salaryPtr = salary;
    }

    Teacher(Teacher &obj){
        this->name = obj.name;
        salaryPtr = new float;
        *salaryPtr = *obj.salaryPtr;
    }

    void getInfo(){
        cout << "name :"<< name << endl;
        cout<< "Cgpa :" << *salaryPtr << endl;
    }
};


int main(){

    Teacher t1("laksya",123);
    t1.getInfo();

    Teacher t2(t1);
    *(t2.salaryPtr) = 1000;
    t2.getInfo();
    t1.getInfo();
    /*
   Car firstCar; //Default Constructor
   firstCar.display();


   Car myCar("Suzuki", "abcd"); // Invokes parametrized constructor
   myCar.display();

   Car t2(myCar); // Invokes copy constructor
   t2.display();
   */

    return 0;
}