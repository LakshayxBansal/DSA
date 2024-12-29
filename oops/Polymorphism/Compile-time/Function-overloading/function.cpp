#include<iostream>
using namespace std;

class Calculator{
    public: 
    int add(int x,int y){
        return x+y;
    }
    int add(int a , int b, int c){
        return a+b+c;
    }
};

int main(){
    Calculator calc;
    cout<<"Addition of 3 and 4 is: "<< calc.add(3,4)<<endl;
    cout<<"Multiplication of 3,4,5 is: "<< calc.add(3,4,5)<<endl;
}