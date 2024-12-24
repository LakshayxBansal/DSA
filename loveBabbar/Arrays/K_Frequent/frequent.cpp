/*
Given a non-empty array arr[] of integers, find the top k elements which have the highest frequency in the array. If two numbers have the same frequencies, then the larger number should be given more preference.

Examples:

Input: arr[] = [3, 1, 4, 4, 5, 2, 6, 1], k = 2
Output: [4, 1]
Explanation: Frequency of 4 = 2, Frequency of 1 = 2. These two have the maximum frequency and 4 is larger than 1.
Input: arr[] = [7, 10,11, 5, 2, 5, 5, 7, 11, 8, 9], k = 4
Output: [5, 11, 7, 10]
Explanation: Frequency of 5 = 3, Frequency of 11 = 2, Frequency of 7 = 2, Frequency of 10 = 1. These four have the maximum frequency and 5 is largest among rest.
Constraints:
1 <= arr.size() <= 105
1<= arr[i] <=105
1 <= k <= no. of distinct elements
*/

#include <iostream>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std; 

class Solution{
    public:
    vector<int> topKFrequent(vector<int> &arr, int k){
        vector<int> result;
        unordered_map<int,int> countMap;

        // for(int i=0;i<arr.size();i++){
        //     countMap[arr[i]]++;
        // }

        for(int num : arr){
            countMap[num]++;
        }

        priority_queue<pair<int, int>> maxHeap;

        for(auto& entry : countMap){
            maxHeap.push({entry.second, entry.first});
        }
    }
}

int main(){
    return 0;
}