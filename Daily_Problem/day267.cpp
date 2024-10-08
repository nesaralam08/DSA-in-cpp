Largest Pair Sum

Find the largest pair sum in an array of distinct integers.

Examples :

Input: arr[] = [12, 34, 10, 6, 40]
Output: 74
Explanation: Sum of 34 and 40 is the largest, i.e, 34 + 40 = 74.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 106

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int m1 = INT_MIN;
        for(int i:arr)
            m1 = max(i,m1);
        int m2 = INT_MIN;
        for(int i:arr){
            if(i!=m1)
                m2 = max(i,m2);
        }
        return m1+m2;
    }
};
