// K Sized Subarray Maximum

// Given an array arr[] and an integer k. Find the maximum for each and every contiguous subarray of size k.

// Examples:

// Input: k = 3, arr[] = [1, 2, 3, 1, 4, 5, 2, 3, 6]
// Output: [3, 3, 4, 5, 5, 5, 6] 
// Explanation: 
// 1st contiguous subarray = [1 2 3] max = 3
// 2nd contiguous subarray = [2 3 1] max = 3
// 3rd contiguous subarray = [3 1 4] max = 4
// 4th contiguous subarray = [1 4 5] max = 5
// 5th contiguous subarray = [4 5 2] max = 5
// 6th contiguous subarray = [5 2 3] max = 5
// 7th contiguous subarray = [2 3 6] max = 6

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        // your code here
        vector<int>ans;
        int n = arr.size();
        priority_queue<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push({arr[i],i});
            while(!p.empty() and p.top().second <= i-k) p.pop();
                if(i>=k-1)
                    ans.push_back(p.top().first);
        }
        return ans;
    }
};