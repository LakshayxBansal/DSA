/*
66. Plus One
Easy
Topics
Companies
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
*/


#include <iostream>
#include<vector>
using namespace std;

vector<int> incrementNumber(vector<int>& digits) {
    int n = digits.size();
    
    // Traverse the array from the last digit to the first
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits; // No carry, return the result
        }
        digits[i] = 0; // Set current digit to 0 and continue
    }
    
    // If all digits were 9, add 1 at the beginning
    digits.insert(digits.begin(), 1);
    return digits;
}


int main() {
    vector<int> input1 = {1, 2, 3};
    vector<int> result1 = incrementNumber(input1);
    for (int num : result1) cout << num << " ";
    cout << endl;

    vector<int> input2 = {1, 5, 6};
    vector<int> result2 = incrementNumber(input2);
    for (int num : result2) cout << num << " ";
    cout << endl;

    return 0;
}