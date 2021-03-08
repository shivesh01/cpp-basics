#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}
// Initialize nodes
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

// Allocate memory
one = mallac(sizeof(struct node));
two = mallac(sizeof(struct node));
three = mallac(sizeof(struct node));

// Assign data values

one->data = 1;
two->data = 2;
three->data = 3;

// Connect nodes

one->next = two;
two->next = three;
three->next = NULL;

// Save address of first node in head
head = one;

int main()
{

    head = one;
    while (head != NULL)
    {
        printf("%d ", head->value);
        head = head->next;
    }
}