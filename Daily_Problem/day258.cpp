// Minimal Cost

// There is an array arr of heights of stone and Geek is standing at the first stone and can jump to one of the following: Stone i+1, i+2, ... i+k stone, where k is the maximum number of steps that can be jumped and cost will be |hi-hj| is incurred, where j is the stone to land on. Find the minimum possible total cost incurred before the Geek reaches the last stone.

// Example:

// Input: k = 3, arr[]= [10, 30, 40, 50, 20]
// Output: 30
// Explanation: Geek will follow the path 1->2->5, the total cost would be | 10-30| + |30-20| = 30, which is minimum

// Expected Time Complexity: O(n*k)
// Expected Auxilary Space: O(n)

// Constraint:
// 1<= arr.size() <=104
// 1 <= k <= 100
// 1 <= arr[i] <= 104

#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int>ans(n,INT_MAX);
        ans[n-1] = 0;
        for(int i=n-2;i>=0;i--){
            for(int j=1;j<=k;j++){
                if(i+j>=n)
                    break;
                ans[i] = min(ans[i], abs(arr[i] - arr[i + j]) + ans[i + j]);
            }
        }
        return ans[0];
    }
};