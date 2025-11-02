// QUestion Limk :- https://www.geeksforgeeks.org/problems/bubble-sort/1

// Time Complexity :- Best Case: O(n) , Worst Case: O(n²), Average Case: O(n²)
// Space Complexity :- O(1)


class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i=n-2; i>=0; i--){
            bool swapped = 0;
            for(int j=0; j<=i; j++){
                if(arr[j] > arr[j+1]){
                    swapped = 1;
                    swap(arr[j], arr[j+1]);
                }
            }
            if(!swapped) break;
        }
    }
};
