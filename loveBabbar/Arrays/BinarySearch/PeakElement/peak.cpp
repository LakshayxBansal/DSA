/*
Given an 0-indexed array of integers arr[], find its peak element and return its index. An element is considered to be peak if its value is greater than or equal to the values of its adjacent elements (if they exist).

Note: The output will be "true" if the index returned by your function is correct; otherwise, it will be "false".

Examples :

Input: arr = [1, 2, 3]
Output: true
Explanation: If the index returned is 2, then the output printed will be 1. Since arr[2] = 3 is greater than its adjacent elements, and there is no element after it, we can consider it as a peak element. No other index satisfies the same property, so answer will be printed as 0.
Input: arr = [1, 1, 1, 2, 1, 1, 1]
Output: true
Explanation: In this case there are 5 peak elements with indices as {0,1,3,5,6}. Returning any of them will give you correct answer.
Input: arr = [1, 1, 1]
Output: true
Explanation: In this case, all elements are peak elements.
*/


#include<iostream>
using namespace std;

int peakElement(int arr[],int n){
    int left = 0;
    int right = n-1;

    while(left < right){
        int mid = left + (right-left)/2 ;

        if(arr[mid] > arr[mid+1]){
            right = mid;
        }else{
            left = mid+1;
        }
    }
    return arr[left];
}

int main(){
    int arr1[8] = {1,2,3,4,5,6,7,8};
    cout<<"peak element in arr1  is: "<<peakElement(arr1,8)<<endl;

    int arr2[9] = {1,1,1,1,2,1,1,1,1};
    cout<<"peak element in arr2 is: "<<peakElement(arr2,9)<<endl;

    int arr3[7] = {8,2,3,2,1,3,6};
    cout<<"peak element in arr3 is: "<<peakElement(arr3,7)<<endl;

    return 0;
}