#include<iostream>
using namespace std;

// Ip -> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
// Op -> { 2, 1, 4, 3, 6, 5, 8, 7, 10, 9}

void swapAlternate(int arr[], int n){
    if(n%2 != 0){
        for(int i=0;i<n-1;i = i+2){
            int start =i;
            int end = i+1;
            swap(arr[start],arr[end]);
        }
    }else{
        for(int i=0; i<n;i+=2){
            int start =i;
            int end = i+1;
            swap(arr[start],arr[end]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    };
    cout << endl;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    swapAlternate(arr,10);
    printArray(arr,10);

    int brr[7] = {1,2,3,4,5,6,7};
    swapAlternate(brr,7);
    printArray(brr,7);
    return 0;
}