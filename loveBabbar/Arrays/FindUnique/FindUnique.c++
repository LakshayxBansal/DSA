#include<iostream>
using namespace std;

// Using XOR -- 0^6 = 6 && 6^6 = 0 ... so using this will only return unique element 

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    };
    cout << endl;
}

int findUnique(int arr[],int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans ^ arr[i];
    }
    cout << ans<< endl;
    return ans;
}

int main(){

    int arr[9] = {1,2,3,2,1,3,7,7,7};
    findUnique(arr,9);
    return 0;
}