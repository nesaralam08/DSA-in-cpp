// Majority Vote

// You are given an array of integer nums[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return -1. 

// Note: The answer should be returned in an increasing format.

// Examples:

// Input: nums = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
// Output: [5, 6]
// Explanation: 5 and 6 occur more n/3 times.

// Expected Time Complexity: O(n)
// Expected Space Complexity: O(1)

// Constraint:
// 1 <= nums.size() <= 106
// 0 <= nums[i] <= 109

 vector<int> findMajority(vector<int>& nums) {
         // Your code goes here.
         int n = nums.size();
         map<int, int> mp;
         for(auto it : nums)
         {
             mp[it]++;
         }
         vector<int> ans;
         for(auto it : mp)
         {
             if(it.second > n/3)
             {
                 ans.push_back(it.first);
             }
         }
         if(ans.size())
        {
            return ans;
         }
         else
         {
             return {-1};
        }
     }
