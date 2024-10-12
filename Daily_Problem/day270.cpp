// Two Smallests in Every Subarray

// Given an array of integers arr, the task is to find and return the maximum sum of the smallest and second smallest element among all possible subarrays of size greater than one. If it is not possible, then return -1.

// Examples:

// Input: arr = [4, 3, 1, 5, 6]
// Output: 11

// Expected Time Complexity: O(n)
// Expected Space Complexity: O(1)

// Constraints:
// 1<=arr.size()<=105 
// 1<=arr[i]<=105


// class Solution{
//   public:
//     int pairWithMaxSum(vector<int>& arr) {
//         // code here
//         if(arr.size()<2){
//             return -1;
//         }
        
//         int max=0;
//         for(int i=0;i<arr.size()-1;i++){
//             if(arr[i]+arr[i+1]>max){
//                     max=(arr[i]+arr[i+1]);
//                 }
//             }
        
//         return max;
//     }
// };