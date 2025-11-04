// Question Link :- https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card



class Solution {
  public:
    void printTillN(int n) {
        // code here
        if(n > 0){
            printTillN(n-1);
            cout<< n << " "; // 1 2 3 4 5..........upto n
        }
        return;
        
    }
};

