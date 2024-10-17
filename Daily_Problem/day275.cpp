// Split Linked List Alternatingly

// Given a singly linked list's head. Your task is to complete the function alternatingSplitList() that splits the given linked list into two smaller lists. The sublists should be made from alternating elements from the original list.
// Note: 

// The sublist should be in the order with respect to the original list.
// Your have to return an array containing the both sub-linked lists.
// Examples:

// Input: LinkedList = 0->1->0->1->0->1
// Output: 0->0->0 , 1->1->1
// Explanation: After forming two sublists of the given list as required, we have two lists as: 0->0->0 and 1->1->1.

// class Solution {
//   public:
//     // Function to split a linked list into two lists alternately
//     vector<Node*> alternatingSplitList(struct Node* head) {
//         // Your code here
//         Node*h1= new Node(-1),*h2= new Node(-1);
//         Node*temp1=h1,*temp2=h2;
//         int i=0;
//         while(head){
//             if(i%2==0){
//                 temp1->next = new Node(head->data);
//                 temp1 = temp1->next;
//             }else{
//                 temp2->next = new Node(head->data);
//                 temp2 = temp2->next;
//             }
//             head = head->next;
//             i++;
//         }
//         return {h1->next,h2->next};
        
//     }
// };