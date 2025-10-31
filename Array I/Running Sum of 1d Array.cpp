// Question Link :-  https://leetcode.com/problems/running-sum-of-1d-array/  Leetcode (1480)

// Time and Space Complexity :- O(n)


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;
        int prevSum = 0;

        for(int i=0; i<n; i++){
            prevSum += nums[i];
            ans.push_back(prevSum);
        }

        return ans;
        
    }
};
