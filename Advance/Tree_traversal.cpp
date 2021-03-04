// Tree traversal in C++

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Preorder traversal
void PreorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << "->";
    PreorderTraversal(node->left);
    PreorderTraversal(node->right);
}

// Postorder traversal
void PostorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;

    PostorderTraversal(node->left);
    cout << node->data << "->";
    PostorderTraversal(node->right);
}

void InorderTraverasal(struct Node *node)
{
    if (node == NULL)
        return;

    InorderTraverasal(node->left);
    InorderTraverasal(node->right);
    cout << node->data << "->";
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Inorder traversal ";
    InorderTraverasal(root);

    cout << "\nPreorder traversal ";
    PreorderTraversal(root);

    cout << "\nPostorder traversal ";
    PostorderTraversal(root);
}