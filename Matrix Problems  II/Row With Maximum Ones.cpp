// Question Link:- https://leetcode.com/problems/row-with-maximum-ones/description/ Leetcode(2643)
// Time Complexity :- O(n * m)
// Space Complexity :- O(1)


class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int bestRow = 0;
        int bestCount = 0;


        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<m; j++){
                if(mat[i][j] == 1) count++;
            }
            if(count > bestCount){
                bestRow = i;
                bestCount = count;
            }
        }
        return {bestRow, bestCount};
    }
};
