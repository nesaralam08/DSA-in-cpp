// Rotate and delete

// Given an array arr integers. Assume sz to be the initial size of the array. Do the following operations exactly sz/2 times. In every kth (1<= k <= sz/2) operation:

// Right-rotate the array clockwise by 1.
// Delete the (n– k + 1)th element from begin.
// Now, Return the first element of the array.
// Note: Here n keeps on decreasing with every operation.

// Examples:

// Input: arr = [1, 2, 3, 4, 5, 6]
// Output: 3

// Expected Time Complexity: O(n2)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= arr.size() <= 103
// 1 <= arr[i] <= 106

// class Solution {
//   public:
//     int rotateDelete(vector<int> &arr) {
//         // Your code here
//         int n = arr.size();
//         int t = n/2;
//         for(int i=1;i<=t;++i){
//             arr.insert(arr.begin(),arr[n-1]);
//             arr.erase(arr.begin()+n-i);
//             n--;
//         }
//         return arr[0];
//     }
// };