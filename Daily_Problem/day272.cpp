// Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

// Examples :

// Input: LinkedList : 1->2->3->4->5

// Output: 5
// Explanation: Count of nodes in the linked list is 5, which is its length.

// class Solution {
//   public:
//     // Function to count nodes of a linked list.
//     int getCount(struct Node* head) {

//         // Code here
//         int n=0;
//         while(head){
//             n++;
//             head = head->next;
//         }
//         return n;
//     }
// };