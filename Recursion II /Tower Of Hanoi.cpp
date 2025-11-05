// Question Link :- https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
// Time Complexity :- O(2^n)
// Space Complexity :- O(n)

class Solution {
  public:
  
    void toh(int n, int source, int helpher, int destination){
        if(n == 1) return;
        
        toh(n-1, source, destination, helpher);
        
        toh(n-1, helpher, destination, source);
    }
  
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n == 0) return 0;
        
        toh(n, from, aux, to);
        return pow(2, n) - 1;
    }
};
