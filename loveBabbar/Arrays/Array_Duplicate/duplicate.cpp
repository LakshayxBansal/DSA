/*
Given an array arr of integers, find all the elements that occur more than once in the array. Return the result in ascending order. If no element repeats, return an empty array.

Examples:

Input: arr[] = [2, 3, 1, 2, 3]
Output: [2, 3] 
Explanation: 2 and 3 occur more than once in the given array.
Input: arr[] = [0, 3, 1, 2] 
Output: [] 
Explanation: There is no repeating element in the array, so the output is empty.
Input: arr[] = [2]
Output: [] 
Explanation: There is single element in the array. Therefore output is empty.
Constraints:
1 <= arr.size() <= 106
0 <= arr[i] <= 106
*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int, int> countMap;
        vector<int> duplicates;

        for (int num : arr) {
            countMap[num]++;
        }

        
        for (auto& entry : countMap) { 
            if (entry.second > 1) {
                duplicates.push_back(entry.first); 
            }
        }

        
        sort(duplicates.begin(), duplicates.end());

        return duplicates;
    }
};


// below is the link of the problem

// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&sortBy=submissions
// https://leetcode.com/problems/find-all-duplicates-in-an-array/