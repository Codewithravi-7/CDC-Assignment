// https://leetcode.com/problems/find-pivot-index/description/ Leetcode (724)
// Time Complexity :- O(n) && Space Complexity :- O(1)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        for(int &x : nums){
            sum += x;
        }
        int cs = 0;

        for(int i=0; i<n; i++){
            int ls = cs;
            int rs = sum - cs - nums[i];

            if(ls == rs) return i;

            cs += nums[i];
        }

        return -1;
    }
};
