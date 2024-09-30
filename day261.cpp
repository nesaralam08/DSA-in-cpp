// Multiply two linked lists

// Given elements as nodes of the two singly linked lists. The task is to multiply these two linked lists, say L1 and L2.

// Note: The output could be large take modulo 10^9+7.

// Examples :

// Input: LinkedList L1 : 3->2 , LinkedList L2 : 2
// Output: 64

// Expected Time Complexity: O(max(n,m))
// Expected Auxilliary Space: O(1)
// where n is the size of L1 and m is the size of L2

// Constraints:
// 1 <= number of nodes <= 105
// 1 <= node->data <= 103

#define mod 1000000007
class solution {
  public:
    void get(Node*temp,long long &n){
        while(temp){
            n = ((n*10)+temp->data)%mod;
            temp = temp->next;
        }
    }
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long n1=0,n2=0;
        get(first,n1);
        get(second,n2);
        return (n1*n2)%mod;
    }
};