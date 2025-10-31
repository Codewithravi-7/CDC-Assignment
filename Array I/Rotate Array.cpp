// https://leetcode.com/problems/rotate-array/description/ Leetcode (189)

// Time Complexity :- O(n) and Space Complexity :- O(n)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>temp(n);
        for(int i=0; i<n; i++){
            temp[(i+k)%n] = nums[i];
        }
        nums = temp;
    }
};
