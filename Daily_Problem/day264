🚀Day 264 of #365daysofcodechallenge

🎯Today's Problem on GeeksforGeeks is :-

Deletion and Reverse in Circular Linked List  :-

Given a Circular Linked List. The task is to delete the given node, key in the circular linked list, and reverse the circular linked list.

Note:

You don't have to print anything, just return the head of the modified list in each function.

Nodes may consist of Duplicate values.

The key may or may not be present.

Examples:

Input: Linked List: 2->5->7->8->10, key = 8

Output: 10->7->5->2 

Explanation: After deleting 8 from the given circular linked list, it has elements as 2, 5, 7, 10. Now, reversing this list will result in 10, 7, 5, 2 & the resultant list is also circular.


Expected Time Complexity: O(n)

Expected Auxillary Space: O(1)

Constraints:

2 <= number of nodes, key <= 105

1 <= node -> data <= 105

Difficulty Level of this problem is MEDIUM.

class solution{
public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        // code here
        Node* prev = head;
        Node* curr = head->next;
        while(curr!=head){
            Node*next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head->next = prev;
        return prev;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        // code here
        if(head->data==key){
            Node* del = head;
            head = head->next;
            Node* curr = head;
            while(curr->next!=del){
                curr = curr->next;
            }
            curr->next = head;
            delete del;
        }
        else{
            Node*prev = head;
            Node*curr = head->next;
            while(curr!=head and curr->data!=key){
                prev = curr;
                curr = curr->next;
            }
            if(curr->data==key){
                prev->next = curr->next;
                delete curr;
            }
        }
        return head;
    }
};
