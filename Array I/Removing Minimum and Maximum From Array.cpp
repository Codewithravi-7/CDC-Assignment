// Question Link :- https://leetcode.com/problems/removing-minimum-and-maximum-from-array/description/ (Leetcode 2091)

// Time Complexity :- O(n) and Space Complexity :- O(1)

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIndex = 0;
        int maxIndex = 0;

        for(int i=1; i<n; i++){
          // Find minIndex of Element
            if(nums[i] < nums[minIndex]){
                minIndex = i;
            }
          // Find maxIndex of Element
            if(nums[i] > nums[maxIndex]){
                maxIndex = i;
            }
        }
      // there are 4 cases
        int case1 = max(minIndex, maxIndex) + 1;
        int case2 = n - min(minIndex, maxIndex);
        int case3 = (minIndex + 1) + (n - maxIndex);
        int case4 = (maxIndex + 1) + (n - minIndex);

        
        // min num of Deletion 
        int ans = min({case1, case2, case3, case4});

        return ans;
    }
};
