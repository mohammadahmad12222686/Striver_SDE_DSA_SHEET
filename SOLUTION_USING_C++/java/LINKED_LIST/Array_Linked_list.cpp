//CODING NINJAS

/*Problem Statement
Suggest Edit
You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.




Make a linked list from the array and return the head of the linked list.




The head of the linked list is the first element of the array, and the tail of the linked list is the last element.




Note:
In the output, you will see the elements of the linked list made by you.





Example:
Input: ‘Arr’ = [4, 2, 5, 1]

Output: 4 2 5 1

Explanation: Linked List for the array ‘Arr’ = [4, 2, 5, 1] is 4 -> 2 -> 5 -> 1.

Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
4
4 2 5 1





Sample Output 1 :
4 2 5 1





Explanation Of Sample Input 1:
Linked List for the array ‘Arr’ = [4, 2, 5, 1] is 4 -> 2 -> 5 -> 1.





Sample Input 2:
5
4 3 2 1 5





Sample Output 2:
4 3 2 1 5





Explanation Of Sample Input 2:
Linked List for the array ‘Arr’ = [4, 3, 2, 1, 5] is 4 -> 3 -> 2 -> 1 -> 5.





Expected Time Complexity:
The expected time complexity is O(N).





Constraints:
1 <= ‘N’ <= 10^4
1 <= ‘Arr[i]’ <= 10^5

Time Limit: 1 second
*********************************************************************************************/

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

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* head=nullptr;
    Node* box=new Node(arr[0]);
    head=box;
    for(int i=1; i<arr.size();i++){
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        Node* newnode=new Node(arr[i]);
        temp->next=newnode;
    }
    return head;






}
