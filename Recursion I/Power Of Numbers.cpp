// Question Link :- https://www.geeksforgeeks.org/problems/power-of-numbers-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
        int original = n;
        int reverse = 0;
        while(n > 0){
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n/=10;
        }
        int result = pow(original, reverse);
        
        return result;
    }
};
