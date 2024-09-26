// Roof Top


// You are given the heights of consecutive buildings. You can move from the roof of a building to the roof of the next adjacent building. You need to find the maximum number of consecutive steps you can put forward such that you gain an increase in altitude with each step.

// Examples:

// Input: arr[] = [1, 2, 2, 3, 2]
// Output: 1
// Explanation: 1, 2, or 2, 3 are the only consecutive buildings with increasing heights thus maximum number of consecutive steps with an increase in gain in altitude would be 1 in both cases.


class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        int ans = 0;
        int t = 0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                t++;
                ans = max(ans,t);
            }
            else
                t = 0;
        }
        return ans;
    }
};