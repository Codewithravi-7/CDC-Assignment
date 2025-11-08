// Question Link :- https://leetcode.com/problems/spiral-matrix/description/ Leetcode (54)

// Time Complexity :- O(m * n)
// Space Complexity :- O(1) : Space (including result) : O(m * n)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0;
        int bottom = row-1;
        int left = 0;
        int right = col -1;

        while(left <= right && top <= bottom){
            // Print Top
            for(int j=left; j <= right; j++){
                ans.push_back(matrix[top][j]);
            }
            top++;
            // Print Right
            for(int j=top; j <=bottom; j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            // Print bottom
            if(top <= bottom){
                for(int j=right; j>=left; j--){
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            // Print left
            if(left <= right){
                for(int j=bottom; j>=top; j--){
                    ans.push_back(matrix[j][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
