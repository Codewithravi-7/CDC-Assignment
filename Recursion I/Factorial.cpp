// Question Link :- https://www.geeksforgeeks.org/dsa/program-for-factorial-of-a-number/


// <<<<<<<<<<<<<<<<<<<<<<< Approach 1 (using Recursion) >>>>>>>>>>>>>>>>>>>>>>>>>>>>>

class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n == 0 || n == 1) return 1; // Base Case
        
        return n * factorial(n-1); // Recursive Case
    }
};


// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Approach 2 (using itrate) >>>>>>>>>>>>>>>>>>>>>>>>>>>


class Solution {
  public:
    int factorial(int n) {
        // code here
        int ans = 1;
        for(int i=2; i<=n; i++){
            ans *= i;
        }
        return ans;
    }
};
