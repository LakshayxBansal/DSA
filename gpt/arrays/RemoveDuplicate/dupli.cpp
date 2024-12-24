#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> dupli(int arr[],int n){
    unordered_map<int, int> unique_elements;
    for (int i = 0; i < n; i++) {
        unique_elements[arr[i]] = 1;
    }

    vector<int> results;
    for(auto& entry : unique_elements){
        results.push_back(entry.first);
    }

    sort(results.begin(),results.end());

     return results;

}

int main(){
    int arr1[10] = {1,2,3,4,5,23,2,3,2,6};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    vector<int> result = dupli(arr1, 10);

    cout << "Unique elements: ";
    for (int elem : result) {
        cout << elem << " ";
    }
    cout << endl;

    return 1;
}