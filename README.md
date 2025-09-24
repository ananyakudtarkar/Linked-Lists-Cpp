# Linked Lists C++
A linked list is a linear data structure where elements (called nodes) are stored non-contiguously in memory and are connected using pointers.
Unlike arrays, linked lists do not require a fixed size and allow dynamic memory allocation, making insertion and deletion efficient.

## Structure of a Node

Each node in a linked list typically contains:

Data – The actual value stored in the node.

Pointer – A pointer to the next node in the list.

## Types of Linked Lists

### Singly Linked List
Each node points to the next node, and the last node points to NULL.

[data|*] -> [data|*] -> [data|*] -> NULL


### Doubly Linked List
Each node contains two pointers: one to the next node and one to the previous node.

NULL <- [*|data|*] <-> [*|data|*] <-> [*|data|*] -> NULL


### Circular Linked List
The last node points back to the first node instead of NULL.

[data|*] -> [data|*] -> [data|*] ┐
    ^___________________________┘


### Circular Doubly Linked List
Combines circular and doubly linked properties.

## Advantages of Linked Lists

Dynamic size – Can grow or shrink during runtime.

Efficient insertion/deletion – No shifting of elements needed.

Memory utilization – Uses memory as needed (no pre-allocation).

## Disadvantages

More memory per element – Extra space for the pointer.

No direct access – Sequential access required (cannot access randomly like arrays).

Complex implementation – More error-prone than arrays.

## Basic Operations on Linked Lists

Creation of a Node

Node* newNode = new Node();
newNode->data = 10;
newNode->next = NULL;


### Insertion

At the beginning

At the end

At a specific position

void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}


### Deletion

From the beginning

From the end

By value or position

void deleteNode(Node*& head, int key) {
    Node* temp = head, *prev = NULL;
    if (temp != NULL && temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    delete temp;
}


### Traversal
Visiting every node in the list to display or process data.

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

## Summary

A linked list is a fundamental data structure that stores data elements as nodes connected by pointers. It is especially useful when the number of elements is unknown or changes frequently. Although accessing elements is slower than arrays, operations like insertion and deletion are more efficient and flexible.
