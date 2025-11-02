// Question Link :- https://www.geeksforgeeks.org/problems/selection-sort/1
// Time Complexity :- O(n^2)
// Space Complexity :- O(1)

class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i=0; i<n-1; i++){
            int index = i;
            for(int j=i+1; j<n; j++){
                if(arr[j] < arr[index]){
                    index = j;
                }
            }
             swap(arr[i], arr[index]);
        }
    }
};
