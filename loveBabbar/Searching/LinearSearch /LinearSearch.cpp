#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

bool linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout<< "Key found at index "<< i <<endl;
            return true;
        }
    }
    return false;
}

int main (){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printArray(arr,10);
    cout<<linearSearch(arr,10,5)<<endl;
    return 0;
}