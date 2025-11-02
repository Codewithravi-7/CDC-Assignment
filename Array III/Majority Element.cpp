// Question Link :- https://leetcode.com/problems/majority-element/description/ Leetcode (169)
//  TIme Complexity :- O(n)
// Space Complexity :- O(1)



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate, count = 0, n = nums.size();

        for(int i=0; i<n; i++){
            if(count == 0){
                count=1;
                candidate = nums[i];
            }
            else{
                if(candidate == nums[i])
                count++;
                else
                count--;
            }
        }
        return candidate;
    }
};
