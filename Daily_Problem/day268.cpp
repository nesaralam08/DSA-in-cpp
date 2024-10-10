// Max distance between same elements

// Given an array arr[] with repeated elements, the task is to find the maximum distance between two occurrences of an element.

// Note: You may assume that every input array has repetitions.

// Examples:

// Input: arr = [1, 1, 2, 2, 2, 1]
// Output: 5
// Explanation: distance for 1 is: 5-0 = 5, distance for 2 is : 4-2 = 2, So max distance is 5.


// Expected Time Complexity :  O(n)
// Expected Auxilliary Space : O(n)

// Constraints:
// 1 <= arr.size() <= 106
// 1 <= arr[i] <= 109
class Solution{
public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]] = i;
        }
        int ans = -1;
        for(int i=0;i<n;i++){
            if(mp[arr[i]]){
                ans = max(ans,abs(i-mp[arr[i]]));
            }
        }
        return ans;
    }
};