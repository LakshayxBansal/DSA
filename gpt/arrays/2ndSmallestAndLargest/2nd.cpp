#include<iostream>
using namespace std;


int second_smallest(int arr[],int n){
    int s1 = INT_MAX;
    int s2 = INT_MAX;
    if(n == 1){
        return arr[n-1];
    }

    for(int i=0;i<n;i++){
        if(arr[i] < s1){
            s2 = s1;
            s1 = arr[i];
        }else if(arr[i] > s1 && arr[i] < s2){
            s2 = arr[i];
        }
    }
    cout << s2<<endl;
    return s2;
}

int second_largest(int arr[],int n){

    if(n == 1){
        return arr[n-1];
    }
    
    int l1 = arr[0];
    int l2 = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i] > l1){
            l2 = l1;
            l1 = arr[i];
        }
    }
    cout << l2<<endl;
    return l2;
}


int main(){
    int arr1[6] = {1,2,3,4,5,6};
    second_largest(arr1,6);
    second_smallest(arr1,6);
    return 1;
}