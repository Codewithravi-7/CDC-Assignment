// Question Link :- https://leetcode.com/problems/intersection-of-two-arrays/description/ Leetcode (349)

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Approach 1 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// First Sort Both Array Using Bubble Sort and then compare the array and matching array push into the ans
// Time Complexity :- O(n₁² + n₂²)
// Space Complexity :- O(k) , Where (k = number of common unique elements)

class Solution {
public:

    void bubbleSort(vector<int>& arr){
        int n = arr.size();

        for(int i=n-2; i>=0; i--){
            bool Swapped = 0;
            for(int j=0; j<=i; j++){
                if(arr[j] > arr[j+1]){
                    Swapped = 1;
                    swap(arr[j], arr[j+1]);
                }
            }
            if(!Swapped) break;
        }
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        bubbleSort(nums1);
        bubbleSort(nums2);

        int i=0, j=0;
        vector<int> ans;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                if(ans.size() == 0 || ans[ans.size()-1] != nums1[i]){
                    ans.push_back(nums1[i]);
                }
                i++; j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
};


// <<<<<<<<<<<<<<<<<<<<<<<<<<<<< Approach 2 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Using InBuilt Sort Function, sort both array then compare and push into the ans
// Time Complexity :- O(n₁ log n₁ + n₂ log n₂)
// Space Complexity :- O(k) , Where (k = number of common unique elements)





class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i=0, j=0;
        vector<int> ans;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                if(ans.size() == 0 || ans[ans.size()-1] != nums1[i]){
                    ans.push_back(nums1[i]);
                }
                i++; j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
};


