//CODING NINJAS
/*Problem Statement
Suggest Edit
You are given the head of a linked list ‘list’ of size ‘N’ and an integer ‘newValue’.




Your task is to insert a node with the value ‘newValue’ at the beginning of the ‘list’ and return the new head of the linked list.




You must write an algorithm whose time complexity is O(1) and whose space complexity is O(1).




Note:
In the output, you will see the elements of the linked list made by you.





Example:
Input: ‘N’ = 4, ‘newValue’ = 0
‘list’ = 4 -> 2 -> 5 -> 1

Output: 0 4 2 5 1

Explanation: Linked List after inserting the newValue is 0 -> 4 -> 2 -> 5 -> 1.

Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
4 0
4 2 5 1

Sample Output 1 :
0 4 2 5 1

Explanation Of Sample Input 1:
Input: ‘N’ = 4, ‘newValue’ = 0
‘list’ = 4 -> 2 -> 5 -> 1

Output: 0 4 2 5 1

Explanation: Linked List after inserting the newValue is 0 -> 4 -> 2 -> 5 -> 1.

Sample Input 2:
5 5
4 3 2 1 5

Sample Output 2:
5 4 3 2 1 5

Explanation Of Sample Input 2:
Input: ‘N’ = 5, ‘newValue’ = 5
‘list’ = 4 -> 3 -> 2 -> 1 -> 5

Output: 5 4 3 2 1 5

Explanation: Linked List after inserting the newValue is 5 -> 4 -> 3 -> 2 -> 1 -> 5.

Constraints:
1 <= 'N' <= 10^4
0 <= list elements <= 10^5
0 <= 'newValue' <= 10^5

Time Limit: 1-sec
****************************************************************************************************/

/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* newnode=new Node(newValue);
    newnode->next=list;
    list=newnode;

    
    
}