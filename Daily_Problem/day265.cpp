🚀Day 265 of #365daysofcodechallenge
🎯Today's Problem on GeeksforGeeks is :-
Not a subset sum  :-
Given a sorted array arr[] of positive integers, find the smallest positive integer such that it cannot be represented as the sum of elements of any subset of the given array set.
Examples:
Input: arr[] = [1, 2, 3] 
Output: 7

Explanation: 7 is the smallest positive number for which no subset is there with sum 7.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints
1 <= arr.size() <= 106
1 <= arr[i] <= 108

Difficulty Level of this problem is EASY.

class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        long long ans = 1;
        for(int i : arr){
            if(ans<i)
                return ans;
            ans+=i;
        }
        return ans;
    }
};
