// Merge two BST 's

// Given two BSTs, return elements of merged BSTs in sorted form.
// Input:
// BST1:
//        5
//      /   \
//     3     6
//    / \
//   2   4  
// BST2:
//         2
//       /   \
//      1     3
//             \
//              7
//             /
//            6
// Output: 1 2 2 3 3 4 5 6 6 7
// Explanation: After merging and sorting the two BST we get 1 2 2 3 3 4 5 6 6 7.

// Expected Time Complexity: O((m+n)*log(m+n))
// Expected Auxiliary Space: O(Height of BST1 + Height of BST2 + m + n)

// Constraints:
// 1 ≤ Number of Nodes, value of nodes ≤ 105

class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void add(Node*root,vector<int>&ans){
        if(root==NULL)
            return;
        add(root->left,ans);
        ans.push_back(root->data);
        add(root->right,ans);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int>ans;
        add(root1,ans);
        add(root2,ans);
        sort(begin(ans),end(ans));
        return ans;
    }
};