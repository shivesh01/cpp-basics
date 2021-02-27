// Linked list implementation in C++
#include <iostream>
using namespace std;

// Creating a node
class Node
{
public:
    int value;
    Node* next;
};

int main()
{
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Allocate 3 nodes int the heap
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign Value Values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Print the linked list Value
    head = one;
    while (head != NULL)
    {
        printf("%d ", head->value);
        head = head->next;
    }
}