// Binary Tree in C++

#include <stdlib.h>
#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// New node creation
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = data;

    node->left = NULL;
    node->right = NULL;
    return (node);
}

// Traverse Preorder
void traversePreorder(struct node *temp)
{
    if (temp != NULL)
    {
        cout << " " << temp->data;
        traversePreorder(temp->left);
        traversePreorder(temp->right);
    }
}

// Traverse Inorder
void traverseInorder(struct node *temp)
{
    if (temp != NULL)
    {
        traverseInorder(temp->left);
        cout << " " << temp->data;
        traverseInorder(temp->right);
    }
}

// Traverse Postorder
void traversePostorder(struct node *temp)
{
    if (temp != NULL)
    {
        traversePostorder(temp->left);
        traversePostorder(temp->right);
        cout << " " << temp->data;
    }
}

int main()
{

    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    cout << "Preorder traversal: ";
    traversePreorder(root);
    cout << "Inorder traversal: ";
    traverseInorder(root);
    cout << "Postorder traversal: ";
    traversePostorder(root);
}