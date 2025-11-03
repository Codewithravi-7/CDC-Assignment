// Question Link :- https://www.geeksforgeeks.org/dsa/remove-duplicates-from-a-given-string/

// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char> mp;
        string ans = "";
        
        for(auto x : s){
            if(mp.find(x) == mp.end()){
                ans+=x;
                mp.insert(x);
            }
        }
        return ans;
    }
};
