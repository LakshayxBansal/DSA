#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<int> countOddEven(vector<int> &arr){
        unordered_map<string,int> countMap ;

        countMap["odd"] = 0;
        countMap["even"] = 0;

        for(int num:arr){
            if(num%2 == 0){
                countMap["even"]++;
            }
            else{
                countMap["odd"]++;
            }
        }

        return {countMap["odd"],countMap["even"]};

    }
};



int main() {
    Solution obj;

    vector<int> arr1 = {1, 2, 3, 4, 5}; // Example 1
    vector<int> arr2 = {1, 1};          // Example 2

    vector<int> result1 = obj.countOddEven(arr1);
    vector<int> result2 = obj.countOddEven(arr2);

    cout << "Odd: " << result1[0] << ", Even: " << result1[1] << endl; // Output: 3 2
    cout << "Odd: " << result2[0] << ", Even: " << result2[1] << endl; // Output: 2 0

    return 0;
}