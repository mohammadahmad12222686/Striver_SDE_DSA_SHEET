/*Problem Statement
Suggest Edit
A doubly-linked list is a data structure that consists of sequentially linked nodes, and the nodes have reference to both the previous and the next nodes in the sequence of nodes.




Given a doubly-linked list, delete the node at the end of the doubly linked list.




Note:
You need not print anything. You’re given the head of the linked list, just return the head of the modified list.





Example:
Input: Linked List:  4 <-> 10 <-> 3 <-> 5 <-> 20

Output: Modified Linked List: 4 <-> 10 <-> 3 <-> 5

Explanation: The last node having ‘data’ = 20 is removed from the linked list.

Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
5
4 10 3 5 20





Sample Output 1:
4 10 3 5 NULL





Explanation Of Sample Input 1 :
The last node having ‘data’ = 20 is removed from the linked list.





Sample Input 2 :
1
5





Sample Output 2 :
NULL





Explanation Of Sample Input 2 :
The linked list has only one node, so the modified linked list is empty.





Expected Time Complexity :
The expected time complexity is O(N).





Constraints:
1 <= ‘N’ <= 100000
1 <= Data of a node in linked list <= 10^9

Time limit: 1 second
**************************************************************************************************/

/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {

    Node* jisko=head;
    // if(head==nullptr){
    //     return head;
    // }
    if(head->next==nullptr){
        Node* temp= head;
        delete head;
        return NULL;
    }
    while(jisko->next!=nullptr)
    {
        jisko=jisko->next;
    }
    Node* temp=jisko;
    jisko->prev->next=nullptr;
    delete jisko;
    return head;
}
