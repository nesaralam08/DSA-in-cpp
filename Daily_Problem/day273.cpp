// Subarray range with given sum

// Given an unsorted array of integers arr[], and a target tar, determine the number of subarrays whose elements sum up to the target value.

// Examples:

// Input: arr[] = [10, 2, -2, -20, 10] , tar = -10
// Output: 3
// Explanation: Subarrays with sum -10 are: [10, 2, -2, -20], [2, -2, -20, 10] and [-20, 10].


// Expected Time Complexity: O(n)
// Expected Auxilary Space: O(n)

// Constraints:
// 1 <= arr.size() <= 106
// -105 <= arr[i] <= 105
// -105 <= tar <= 105

// class Solution {
//   public:
//     // Function to count the number of subarrays which adds to the given sum.
//     int subArraySum(vector<int>& arr, int tar) {
//         // Your code here
//         unordered_map<int,int>mp;
//         int n = arr.size();
//         int ans=0;
//         int c=0;
//         for(int i=0;i<n;i++){
//             ans+=arr[i];
//             if(ans==tar)
//                 c++;
//             if(mp.find(ans - tar) != mp.end()){
//                 c+=mp[ans-tar];
//             }
//             mp[ans]++;
//         }
//         return c;
//     }
// };