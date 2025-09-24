#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int data){
        val = data;
        next = NULL;
    }
};

int main() {
    // Create 3 nodes
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    
    // Link nodes together
    n1->next = n2;
    n2->next = n3;
    // n3->next is NULL
    
    // Print linked list
    Node* temp = n1;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
    return 0;
}

/*
OUTPUT
10 20 30
*/
