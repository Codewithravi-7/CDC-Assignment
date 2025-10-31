// Question Lin :- https://www.naukri.com/code360/problems/reverse-the-array_1262298k

// TIme Complexity :- O(n) and Space Complexity :- O(1)


void reverseArray(vector<int> &arr , int m) {
    // Write your code here
    int start = m+1;
    int end = arr.size()-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
