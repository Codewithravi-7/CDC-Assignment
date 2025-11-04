// Question Link :- https://www.geeksforgeeks.org/problems/sum-of-array2326/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card




// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int recurSum(vector<int>& arr, int n){
        if(n <= 0) return 0;
        
        return recurSum(arr, n-1) + arr[n-1];
    }
    
    int arraySum(vector<int>& arr) {
        // code here
        return recurSum(arr, arr.size());
    }
};
