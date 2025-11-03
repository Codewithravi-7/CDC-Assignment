// Problem Statement: Write a program to count the number of words in a given string.

// Examples:

// Example 1:
// Input: HELLO
// Output: 1

// Example 2:
// Input: HI THERE
// Output: 2

// Example 3:
// Input: HELLO FRIENDS HOW ARE YOU
// Output: 5

#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin, s);
    int count = 1;

    
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            count++;
        }
    }

    if(s.size() < 1){
        cout<< 0;
    } else{
        cout<<count;
    }
    

    return 0;
}
