#include<iostream>
using namespace std;

// there is an array where there is only a single element which is being repeated .... 
// Example -- [1,2,3,4,3] -- 1- n-1(5-1 =4)and only one element is repeated

// Brute Force Approach -- Linear search
// Other approach -- Find sum of whole - Sum of n-1 elements
// Xor the
// Better approach -- Hash maps

int duplicateElement(int arr[],int n){
    int sum = n*(n-1)/2;
    int sum2 = 0;
    for(int i=0;i<n;i++){
        sum2 = sum2 + arr[i];
    }

    int result = sum2-sum;
    cout<< result<<" ";
    return result;
}


int approach2(int arr[], int n){
    // {1,2,3,2,4};
    int ans =0;
    for(int i =0 ; i<n;i++){
        ans = ans ^ arr[i];
        cout<<ans<<" ";
    }

    cout<<endl;
    cout<<endl;
    cout<<"from 2nd loop now"<<endl;
    cout<<endl;

    //Loop 2
    for(int i=1;i< n ;i++){
        ans = ans^i;
        cout<<ans<<" ";
    }

    cout<<endl;
    cout<<"Final ans is "<<ans;
    return 0;
}
int main(){
    int arr[5] = {1,2,3,2,4};
    approach2(arr,5);
    //int brr[10] = {1,2,3,4,5,6,7,8,9,9};
    //duplicateElement(brr,10);
}

