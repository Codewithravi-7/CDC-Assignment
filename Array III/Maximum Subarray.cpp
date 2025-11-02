//  Question Link :- https://leetcode.com/problems/maximum-subarray/description/ Leettcode (53)
// Time Complexity :- O(n)
// SPace Complexity :- O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currSum = nums[0];

        int maxSum = nums[0];

        for(int i=1; i<n; i++){
            currSum  = max(nums[i], currSum + nums[i]);
            maxSum = max(currSum, maxSum);
        }
        return maxSum;
    }
};
