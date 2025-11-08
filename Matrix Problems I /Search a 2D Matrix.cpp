// Question Link :- https://leetcode.com/problems/search-a-2d-matrix/description/ Leetcode(74)
// Time Complexity :- O(n * m)
// Space Complexity :- O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};
