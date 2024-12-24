#include<iostream>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;
    int *ptr2 = &num;
    cout<<"Value of num is: "<<num<<endl;
    cout<<"Size of num is: "<<sizeof(num)<<endl;
    cout<<"Type of num is: "<< typeid(num).name()<<endl<<endl;

    cout<<"Value ptr is: "<<ptr<<endl;
    cout<<"Size of ptr is: "<<sizeof(ptr)<<endl;
    cout<<"Type of ptr is: "<< typeid(ptr).name()<<endl<<endl;

    cout<<"Value of *ptr is: "<<*ptr<<endl;
    cout<<"Size of *ptr is: "<<sizeof(*ptr)<<endl;
    cout<<"Type of *ptr is: "<< typeid(*ptr).name()<<endl<<endl;

    num++;
    cout<<"Value ptr is: "<<ptr<<endl;
    cout<<"Size of ptr is: "<<sizeof(ptr)<<endl;
    cout<<"Type of ptr is: "<< typeid(ptr).name()<<endl<<endl;

    cout<<"Value of *ptr is: "<<*ptr<<endl;
    cout<<"Size of *ptr is: "<<sizeof(*ptr)<<endl;
    cout<<"Type of *ptr is: "<< typeid(*ptr).name()<<endl<<endl;

    return 0;
}