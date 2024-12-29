/*
Multiply left and right array sum
Difficulty: BasicAccuracy: 62.84%Submissions: 53K+Points: 1
You are given an array of integers, your task is to divide the array into two sub-arrays (left and right) containing half of the array elements. Find the sum of the subarrays and then return the multiply of both the subarrays.

Note: If the length of the array is odd then the right half will contain one element more than the left half.

Examples :

Input : arr = [1, 2, 3, 4]
Output : 21
Explanation: Sum up an array from index 0 to 1 = 3, Sum up an array from index 2 to 3 = 7. Their multiplication is 21.
Input : arr = [1, 2] 
Output :  2 
Explanation: Their multiplication is 1*2 is equal to 2.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ arr.size() ≤ 1000
1 ≤ arr[i] ≤ 100
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public: 

    int multiply(vector <int> &arr){
        int sum1 = 0;
        int sum2 = 0;

        int half = arr.size()/2;
        for(int i=0;i<half;i++){
            sum1 += arr[i];
        }

        for(int i=half;i<arr.size();i++){
            sum2 += arr[i];
        }

        return sum1*sum2;
    }
};


int main() {
    Solution solution;
    
    // Initialize array with a loop (if initializer list isn't supported)
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    // Output result
    cout << "The result is: " << solution.multiply(arr) << endl;

    return 0;
}