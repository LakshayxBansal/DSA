#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> repEle(int arr[],int n){
    unordered_map<int, int> unique_elements;
    for (int i = 0; i < n; i++) {
        unique_elements[arr[i]]++;
    }

    vector<int> results;
    for(auto& entry : unique_elements){
        if(entry.second > 1){
            results.push_back(entry.first);
        }
    }

    sort(results.begin(),results.end());

     return results;

}


vector<int> nonRepEle(int arr[],int n){
    unordered_map<int, int> unique_elements;
    for (int i = 0; i < n; i++) {
        unique_elements[arr[i]]++;
    }

    vector<int> results;
    for(auto& entry : unique_elements){
        if(entry.second < 2){
            results.push_back(entry.first);
        }
    }

    sort(results.begin(),results.end());

     return results;

}

int main(){
    int arr1[11] = {1,2,3,4,5,23,5,2,3,2,6};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    vector<int> result = nonRepEle(arr1, 11);
    cout<<"Repeating elements are" << endl;

    for(int elem : result){
        cout << elem << " ";
    }

    return 1;
}