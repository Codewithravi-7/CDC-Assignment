// https://leetcode.com/problems/remove-duplicates-from-sorted-array/ Leetcode (26)
// Time Complexity :- O(n) && Space Complexity :- O(1)



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Size of Array
        int n =nums.size();
        if(n == 0) return 0;

        // Using Two Pointer

        int i=0;

        // if nums[j] != nums[i] that means We Found a new unique Element
        for(int j=1; j<n; j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
