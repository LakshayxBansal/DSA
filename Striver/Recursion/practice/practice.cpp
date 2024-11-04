#include<iostream>
using namespace std;


void recur(int i,int N){
    if(i<=N){
        cout<<i<<" ";
        recur(i+1,N);
    }else{
        return;
    }
}
int main(){

    recur(1,10);
}