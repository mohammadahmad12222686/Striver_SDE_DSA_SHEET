/*Problem Statement
Suggest Edit
You are given a doubly-linked list of size 'N', consisting of positive integers. Now your task is to reverse it and return the head of the modified list.




Note:
A doubly linked list is a kind of linked list that is bidirectional, meaning it can be traversed in both forward and backward directions.

Example:
Input: 
4
4 3 2 1

This means you have been given doubly linked list of size 4 = 4 <-> 3 <-> 2 <-> 1.

Output: 
1 2 3 4

This means after reversing the doubly linked list it becomes 1 <-> 2 <-> 3 <-> 4.

Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1 :
8
1 2 3 4 5 6 7 8 

Sample Output 1 :
8 7 6 5 4 3 2 1

Explanation For Sample Output 1
Input: 1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6 <-> 7 <-> 8
Output: 8 <-> 7 <-> 6 <-> 5 <-> 4 <-> 3 <-> 2 <-> 1
Explanation: It's self explanatory.

Sample Input 2 :
5
5 8 4 9 1

Sample Output 2 :
1 9 4 8 5

Constraints :
1 <= 'N' <= 10^3
0 <= 'data' <= 10^3 

Where 'N' is the size of the doubly linked list.

Time Limit: 1 sec
*************************************************************************************************/

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    

        Node* pichla=nullptr;
        Node* curr=head;
        Node* agla;
        while (curr != nullptr) {
          agla = curr->next;
          curr->prev = agla;
          curr->next = pichla;

          pichla = curr;
          curr = agla;
        }

        head=pichla;
        return head;
}

