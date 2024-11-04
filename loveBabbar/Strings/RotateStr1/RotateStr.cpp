/*
796. Rotate String
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.


Example 1:
Input: s = "abcde", goal = "cdeab"
Output: true

Example 2:
Input: s = "abcde", goal = "abced"
Output: false

*/

#include<iostream>
#include<string>
#include <algorithm>
#include <cctype>
using namespace std;


bool rotateStr(string s, string goal){
    if(s.length() == 0 && goal.length()==0){
        return true;
    }

    if(s.length() != goal.length()){
        return false;
    }

    for(int i=0;i<s.length();++i){
        char first = s[0];
        s = s.substr(1) + first;

        if(s == goal){
            return true;
        }
    }
    return false;
};


int main(){
    cout << (rotateStr("lakshay", "akshayL") ? "true" : "false") << endl; //true
    cout << (rotateStr("abcde", "cdeab") ? "true" : "false") << endl;     //true
    cout << (rotateStr("abcde", "abced") ? "true" : "false") << endl;    //false
    return 0;
}

