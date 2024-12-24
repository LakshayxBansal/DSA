/*

Difference between highest and lowest occurrence

Given an array, the task is to find the difference between the highest occurrence and lowest occurrence of any number in an array.
Note: If only one type of element is present in the array return 0

Examples:

Input: arr[] = [1, 2, 2]
Output: 1
Explanation:  Lowest occurring element (1) occurs once. Highest occurring element (2) occurs 2 times
Input : arr[] = [7, 8, 4, 5, 4, 1, 1, 7, 7, 2, 5]
Output : 2
Explanation : Lowest occurring element (2) occurs once. Highest occurring element (7) occurs 3 times
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1<= arr.size() <=106
1<= arr[i] <=106

*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
    public: 
    int findDifference(vector<int> &arr){
        unordered_map<int,int> freq;
        for(int num:arr){
            freq[num]++;
        }

        int maxFreq = 0; // initialize max value with lowest possible value
        int minFreq = arr.size(); // initialize min value with max possible value

        for(const auto&pair: freq){
            maxFreq = max(maxFreq , pair.second); // Finding maximum frequency 
            minFreq = min(minFreq , pair.second); // Finding minimum frequency
        }

        if(maxFreq == minFreq ){
            return 0;
        } 

        return maxFreq - minFreq;

    }
};

int main(){
    Solution sol;

    // Test cases with manual initialization
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(2); // Output: 1

    vector<int> arr2;
    arr2.push_back(7);
    arr2.push_back(8);
    arr2.push_back(4);
    arr2.push_back(5);
    arr2.push_back(4);
    arr2.push_back(1);
    arr2.push_back(1);
    arr2.push_back(7);
    arr2.push_back(7);
    arr2.push_back(2);
    arr2.push_back(5); // Output: 2

    vector<int> arr3;
    arr3.push_back(5);
    arr3.push_back(5);
    arr3.push_back(5);
    arr3.push_back(5); // Output: 0 (only one element)

    // Calling the function through the object
    cout << "Difference for arr1: " << sol.findDifference(arr1) << endl;
    cout << "Difference for arr2: " << sol.findDifference(arr2) << endl;
    cout << "Difference for arr3: " << sol.findDifference(arr3) << endl;

    return 0;
}