//CODING NINJAS

/*Problem Statement
Suggest Edit
A doubly-linked list is a data structure that consists of sequentially linked nodes, and the nodes have reference to both the previous and the next nodes in the sequence of nodes.




Given a doubly-linked list and a value ‘k’, insert a node having value ‘k’ at the end of the doubly linked list.




Note:
You need not print anything. You’re given the head of the linked list. Return the head of the modified list.





Example:
Input: Linked List: 4 <-> 10 <-> 3 <-> 5 and ‘k’ = 20

Output: Modified Linked List: 4 <-> 10 <-> 3 <-> 5 <-> 20

Explanation: A new node having value ‘k’ = 20 is inserted at the end of the linked list.

Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
4
4 10 3 5
20





Sample Output 1:
4 10 3 5 20





Explanation Of Sample Input 1 :
A new node having value ‘k’ = 20 is inserted at the end of the linked list.





Sample Input 2 :
0

5





Sample Output 2 :
5





Explanation Of Sample Input 2 :
The linked list was empty. So the new node is the only node in the modified linked list.





Expected Time Complexity:
The expected time complexity is O(N).





Constraints:
0 <= ‘N’ <= 100000
1 <= Value in linked list <= 10^9
1 <= ‘k’ <= 10^9

Time limit: 1 second
**********************************************************************************************/

/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    // Write your code here
    Node* newnode=new Node(k);
    if(head==nullptr){
        head=newnode;
        return head;
    }
   
    Node* temp=head;
    
      while (temp->next != nullptr) {
        temp = temp->next;
      }
    
   
    newnode->prev = temp;
    temp->next = newnode;

    return head;
    
}
