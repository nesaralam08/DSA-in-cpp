// 255.Palindrome Linked List

// Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.

// Examples:

// Input: LinkedList: 1->2->1->1->2->1
// Output: true
// Explanation: The given linked list is 1->2->1->1->2->1 , which is a palindrome and Hence, the output is true.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1) 
// Note: You should not use the recursive stack space as well

// Constraints:
// 1 <= number of nodes <= 105
// 1 ≤ node->data ≤ 103

class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        vector<int>t={};
        Node*temp = head;
        while(temp){
            t.push_back(temp->data);
            temp = temp->next;
        }
        vector<int>t2={};
        t2 = t;
        reverse(t2.begin(),t2.end());
        return t2==t;
    }
};
