#include<iostream>
#include<unordered_map>
using namespace std;

string isSubset(int a1[],int a2[], int n, int m){
    unordered_map<int,int> countMap;

    for(int i=0;i<n;i++){
        countMap[a1[i]]++;
    }

    for(int i=0;i<m;i++){
        if(countMap[a2[i]] > 0){
            countMap[a2[i]]--;
        }else{
            return "No";
        }
    }
    return "Yes";
}


int main(){
    int n = 5;
    int m=3;
    
    int a1[5]={1,2,3,4,5}; 
    int a2[3] = {2,5,5};
    
    cout << isSubset(a1, a2, n, m) << endl;

    return 0;
}