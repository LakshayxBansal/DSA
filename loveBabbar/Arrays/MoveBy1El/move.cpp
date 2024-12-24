/*
Rotate Array by One
Difficulty: BasicAccuracy: 69.6%Submissions: 284K+Points: 1
Given an array arr, rotate the array by one position in clock-wise direction.

Examples:

Input: arr = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
Input: arr = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


*/

#include<iostream>
using namespace std;

void rotateArr(int arr[],int n){
    int size = n-1;
    if(size <=1) return;

    int last = arr[size];

    for(int i = size-1; i>=0;i--){
        arr[i+1] = arr[i];
    }

    arr[0] = last;
}

int main(){ 
    int arr1[6] = {1,2,3,4,5,6};
    rotateArr(arr1,6);
    cout << "Rotated Array is : ";
    for (int i = 0; i < 6; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}


// {1,2,3,4,5,6}

// last = 6
// loop start arr[size-1] => from 5
// arr[i+1] = arr[i] => {1,2,3,4,5,5}
// arr[i+1] = arr[i] => {1,2,3,4,4,5}
// arr[i+1] = arr[i] => {1,2,3,3,4,5}
// arr[i+1] = arr[i] => {1,2,2,3,4,5}
// arr[i+1] = arr[i] => {1,1,2,3,4,5}
// arr[0] = last => arr[0] = 6 => {6,1,2,3,4,5}