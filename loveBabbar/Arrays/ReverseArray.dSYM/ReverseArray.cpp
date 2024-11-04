#include <iostream>
using namespace std;


void reverseArr( int arr[] , int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start +=1;
        end -=1;
    };
};

void printArray(int arr[], int n){
    for(int i =0;i<n;i++ ){
        cout<< arr[i]<< " ";
    }
    cout << endl;
};

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    reverseArr(arr, 10);
    printArray(arr,10);
    return 0;
}