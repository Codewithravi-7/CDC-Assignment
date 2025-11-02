// Question Link :- https://www.geeksforgeeks.org/problems/insertion-sort/1
// Time Complexity :- Average & Wrost Case = O(n^2), Best Case = O(n)
// Space Complexity :- O(1)


class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i=1; i<n; i++){
            for(int j=i; j>0; j--){
                if(arr[j] < arr[j-1]){
                    swap(arr[j], arr[j-1]);
                } else{
                    break;
                }
            }
        }
    }
};
