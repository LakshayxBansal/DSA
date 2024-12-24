#include<iostream>
using namespace std;

class Animal{
    public:
    string petname;
    virtual void sound(){
        cout<< "Animal sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound() override {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal{
    public:
    void sound() override {
        cout<<"meow"<<endl;
    }
};

int main(){
    Animal* animal;

    Dog dog;
    animal = &dog;
    animal -> sound();

    return 0;
}