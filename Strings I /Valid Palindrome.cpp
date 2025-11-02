// Question Link :- https://leetcode.com/problems/valid-palindrome/description/ Leetcode(125)
// Time COmplexity :- O(n)
// Space Complexity :- O(n)


class Solution {
public:
    bool isPalindrome(string s) {
      // create a string clean to store all the lowercase letter
        string clean = "";
        for(char ch : s){
          // Check if character is a alphanumeric then convert into the lowercase and add in clean string 
            if(isalnum(ch)){
                clean += tolower(ch);
            }
        }
        int left = 0;
        int right = clean.length() - 1;

        while(left < right){
            if(clean[left] != clean[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
