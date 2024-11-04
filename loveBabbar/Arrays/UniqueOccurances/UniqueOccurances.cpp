// Find unique number of occurances in the given array ... 
// input --> [1,2,2,1,1,3] .. op --> true
// in the above 1 is 3 times , 2 is 2 times and 3 is 1 time ... So each number has 
// unique number of occurance
// input --> [1,2] and output --> false .. here 1 is 1 time and 2 is also 1 time , so output is false

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
    public: 
    bool uniqueOccurances(vector<int>& arr){
        unordered_map<int , int> countMap;
        unordered_set<int> occurances;

        for(int i=0;i<arr.size();i++){
            int num = arr[i];
            countMap[num] ++;
        };


        for(unordered_map<int,int>::iterator it=countMap.begin(); it!= countMap.end(); ++it){
            int count = it->second;
            if (occurances.find(count) != occurances.end()) {
                return false;  // Duplicate occurrence count found
            }
            occurances.insert(count);
            }

            return true;
    }
};

int main() {
    Solution solution;
    
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    vector<int> arr2 = {1, 2};

    cout << boolalpha;
    cout << "Result for [1, 2, 2, 1, 1, 3]: " << solution.uniqueOccurances(arr1) << endl;
    cout << "Result for [1, 2]: " << solution.uniqueOccurances(arr2) << endl;

    return 0;
}
