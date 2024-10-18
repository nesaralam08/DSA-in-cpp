// Single Number

// Difficulty: EasyAccuracy: 41.64%Submissions: 35K+Points: 2
// Given an array arr[] of positive integers where every element appears even times except for one. Find that number occurring an odd number of times.

// Examples:

// Input: arr[] = [1, 1, 2, 2, 2]
// Output: 2
// Explanation: In the given array all element appear two times except 2 which appears thrice.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ arr.size() ≤ 106
// 0 ≤ arri ≤ 105

// class Solution {
//   public:
//     int getSingle(vector<int>& arr) {
//         // code here
//         unordered_map<int,int>mp;
//         int ans;
//         for(auto i:arr){
//             mp[i]++;
//         }
//         for(auto i:mp){
//             if(i.second%2!=0){
//                 ans = i.first;
//                 break;
//             }
//         }
//         return ans;
//     }
// };