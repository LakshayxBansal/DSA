/*
Given two arrays arr1 and arr2 of equal size, the task is to find whether the given arrays are equal. Two arrays are said to be equal if both contain the same set of elements, arrangements (or permutations) of elements may be different though.
Note: If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

Examples:

Input: arr1[] = [1, 2, 5, 4, 0], arr2[] = [2, 4, 5, 0, 1]
Output: true
Explanation: Both the array can be rearranged to [0,1,2,4,5]
Input: arr1[] = [1, 2, 5], arr2[] = [2, 4, 15]
Output: false
Explanation: arr1[] and arr2[] have only one common value.
Expected Time Complexity: O(n)
Expected Space Complexity: O(n)

Constraints:
1<= arr1.size, arr2.size<=107
0<=arr1[], arr2[]<=109
*/



#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Solution{
    public: 
    bool checkBySorting(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.size() != arr2.size()){
            return false;
        }

        sort(arr1.begin(),arr2.end());
        sort(arr2.begin(),arr2.end());

        //Compare arr1 and arr2 using sort
        return arr1 == arr2;
    }

    bool checkByHashing(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.size() != arr2.size()){
            return false;
        }

        unordered_map<int,int> freq1,freq2;

        //Count frequency of each element in arr1
        for(int num: arr1){
            freq1[num]++;
        }

        //Count frequency of each element in arr2
        for(int num: arr2){
            freq2[num]++;
        }

        return freq1 == freq2;
    }
}
