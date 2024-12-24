#include <iostream>
using namespace std;

void exp1(int n){
    for(int i =1;i<=n;i++){
        cout << i << endl;
    };
}

int main(){
    int n;
    cout<<"Enter how many numbers u want to print ??";
    cin>>n;

    exp1(n);
    return 0;
}