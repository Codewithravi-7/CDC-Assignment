// Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.

// Example 1:
// Input: string str=”Hello I am Ravi Shankar Gupta”
// Output: 
// Vowels: 10
// Consonants: 14
// White spaces: 5

// Example 2:
// Input: string str=”India won the cricket match”
// Output:
// Vowels: 8
// Consonants: 15
// White spaces: 4

#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin, s);

    int Vowels = 0;
    int Consonants = 0;
    int Whitespaces = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            Vowels++;
        }
        else if(s[i] == ' '){
            Whitespaces++;
        }
        else{
            Consonants++;
        }

    }
    cout<< "Vowels: " << Vowels << endl;
    cout<< "Consonants: " << Consonants << endl;
    cout<< "Whitespaces: " << Whitespaces << endl;

    return 0;
}
