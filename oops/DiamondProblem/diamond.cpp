#include<iostream>
using namespace std;

class Animal{
    public: 
    void sound(){
        cout<<"bark";
    }
};

class Mammal : virtual public Animal{};

class Bird : virtual public Animal{};

class Penguin : public Bird , public Mammal {

};

int main(){
    Penguin penguin;
    penguin.sound();
};