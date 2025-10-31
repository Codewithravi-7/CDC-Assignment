// Question Lin :- https://leetcode.com/problems/count-elements-with-maximum-frequency/description/ Leetcode(3005)

// TIme Complexity :- O(n) and Space Complexity :- O(k),  where k = number of unique elements (for the map)

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int, int> mp;

        // Push all the Element in the map
        for(int num : nums){
            mp[num]++;
        }

        // Find Maximum Frequency in Map
        int maxFreq = 0;
        for(auto &x : mp){
            maxFreq = max(maxFreq, x.second);
        }

        int count = 0;

        for(auto & x : mp){
            if(x.second == maxFreq){
                count += x.second;
            }
        }

        return count;
        
    }
};
