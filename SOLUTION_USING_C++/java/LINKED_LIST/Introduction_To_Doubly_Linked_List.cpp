//CODING NINJAS
/*Problem Statement
Suggest Edit
You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.




Your task is to make a doubly linked list from the array and return the head of the linked list.




Here, the head of the doubly linked list is the first element of the array, and the tail of the doubly linked list is the last element.




Note:
A doubly linked list is one in which it is possible to access the next and the previous nodes from a node in the linked list (if they exist).





Example:
Input: ‘N’ = 4, ‘Arr’ = [4, 2, 5, 1]

Output: 4 2 5 1

Explanation: Doubly Linked List for the array ‘Arr’ = [4, 2, 5, 1] is 4 <-> 2 <-> 5 <-> 1.





Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
4
4 2 5 1

Sample Output 1 :
4 2 5 1

Explanation Of Sample Input 1:
Input: ‘N’ = 4, ‘Arr’ = [4, 2, 5, 1]

Output: 4 2 5 1

Explanation: 
Doubly Linked List for the array ‘Arr’ = [4, 2, 5, 1] is 4 <-> 2 <-> 5 <-> 1.

Sample Input 2:
5
4 3 2 1 5

Sample Output 2:
4 3 2 1 5

Explanation Of Sample Input 2:
Input: ‘N’ = 5, ‘Arr’ = [4, 3, 2, 1, 5]

Output: 4 3 2 1 5

Explanation: 
Doubly Linked List for the array ‘Arr’ = [4, 3, 2, 1, 5] is 4 <-> 3 <-> 2 <-> 1 <-> 5.





Expected Time Complexity:
Try solving this in O(N).





Constraints:
1 <= 'N' <= 10^4
1 <= 'Arr[i]' <= 10^5

Time Limit: 1 sec
*********************************************************************************************/


/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    // Write your code here
   
    Node* head= new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* newnode=new Node(arr[i]);
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
    }

    
    
    return head;
}

