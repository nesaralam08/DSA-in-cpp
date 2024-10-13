// Delete Alternate Nodes

// Given a Singly Linked List, Delete all alternate nodes of the list ie delete all the nodes present in even positions.

// Examples :

// Input: LinkedList: 1->2->3->4->5->6
// Output: 1->3->5  

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= number of nodes <= 105
// 1 <= node->data <= 103


// class Solution {
//   public:
//     void deleteAlt(struct Node *head) {
//         // Code here
//         while(head!=NULL and head->next!=NULL){
//             head->next = head->next->next;
//             head = head->next;
//         }
//     }
// };