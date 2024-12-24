#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;
}


bool binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid;

    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] == key){
            return true;
        }
        else if(arr[mid] > key){
            end = mid;
        }
        else{
            start = mid+1;
        }
    }
    return false;
};



int main(){

    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<binarySearch(arr1,10,6)<<endl;
    cout<<binarySearch(arr1,10,3)<<endl;
    return 0;
}