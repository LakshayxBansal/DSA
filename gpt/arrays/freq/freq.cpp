#include<iostream>
#include<unordered_map>
using namespace std;

void frequency(int arr[], int n) {
    unordered_map<int,int> freq;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for (auto x : freq)
        cout << x.first << " " << x.second << endl;

}

int main(){
    int arr1[6] = {1,2,3,4,5,6};
    frequency(arr1, 6);

    return 1;
}