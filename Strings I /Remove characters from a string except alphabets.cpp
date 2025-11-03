//Problem Statement: Write a program to remove all characters from a string except alphabets in a given string.

// Input: str = "ravi12% *&shankar ^$#gupta”
// Output: “ravishankargupta”
// Explanation: All characters except alphabets are removed.

// Input: str1 = “Java&C++" 
// Output: “JavaC”
// Explanation: All characters except alphabets are removed.

#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin, s);
    string ans = "";

    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            ans.push_back(s[i]);
        }
    }

    cout<< ans << endl;

    return 0;
}
