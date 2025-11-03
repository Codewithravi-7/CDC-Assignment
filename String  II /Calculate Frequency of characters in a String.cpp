// Problem Statement: Given a string, calculate the frequency of characters in a string.

// Examples:

// Example 1:
// Input: ravishankargupta
// Output: a4 g1 h1 i1 k1 n1 p1 r2 s1 t1 u1 v1 
// Explanation: Count of every character of string is printed.

// Example 2:
// Input: articles
// Output: a1 c1 e1 i1 l1 r1 s1 t1 
// Explanation: Count of every character of string is printed.

#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin, s);
    
    map<char, int> mp;

    for(auto &x : s){
        mp[x]++;
    }

    for(auto &m : mp){
        cout<<m.first<<m.second << " ";
    }


    return 0;
}
