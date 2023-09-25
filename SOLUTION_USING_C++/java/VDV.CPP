#include <iostream>

// Define a Node class for the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert a node at the front of the linked list
void insertAtFront(Node*& head, int value) {
    // Create a new node with the given data
    Node* newNode = new Node(value);

    // Set the new node's next pointer to the current head
    newNode->next = head;

    // Update the head to point to the new node
    head = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr; // Initialize an empty linked list

    // Insert nodes at the front
    insertAtFront(head, 3);
    insertAtFront(head, 2);
    insertAtFront(head, 1);

    // Print the linked list
    printList(head); // Output: 1 2 3

    return 0;