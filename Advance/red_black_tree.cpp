// Implementing Red-Black Tree in C++
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *parent;
    Node *left;
    Node *right;
    int color;
};

typedef Node *Nodeptr;

class RedBlackTree
{
private:
    NodePtr root;
    NodePtr TNULL;

    void initializeNULLNode(NodePtr node, NodePtr parent)
    {
        node->data = 0;
        node->parent = parent;
        node->left = nullptr;
        node->right = nullptr;
        node->color = 0;
    }

    // Preorder
    void preOrderHelper(NodePtr node)
    {
        if (node != TNULL)
        {
            cout << node->data << " ";
            preOrderHelper(node->left);
            preOrderHelper(node->right);
        }
    }

    // Inorder
    void inOrderHelper(NodePtr node)
    {
        if (node != TNULL)
        {
            inOrderHelper(node->left);
            cout << node->data << " ";
            inOrderHelper(node->right);
        }

        // Post order
        void postOrderHelper(NodePtr node)
        {
            if (node != TNULL)
            {
                postOrderHelper(node->left);
                postOrderHelper(node->right);
                cout << node->data << " ";
            }
        }

        NodePtr searchTreeHelper(NodePtr node, int key)
        {
            if (node == TNULL || key == node->data)
            {
                return node;
            }
            if (key < node->data)
            {
                return searchTreeHelper(node->left, key);
            }
            return searchTreeHelper(node->right, key);
        }

        // For balancing the tree after deletion
        void deleteFix(Nodeptr x)
        {
            NodePtr s;
            while (x != root && x->color == 0)
            {
                if (x == x->parent->left)
                {
                    s = x->parent->right;

                    if (s->color == 1)
                    {
                        s->color = 0;
                        x->parent->color = 1;
                        leftRotate(x->parent);
                        s = x->parent->right;
                    }

                    if (s->left->color == 0 && s->right->color == 0)
                    {
                        s->color = 1;
                        x = x->parent;
                    }
                    else
                    {
                        if (s->right->color == 0)
                        {
                            s->left->color = 0;
                            s->color = 1;
                            rightRotate(s);
                            s = x->parent->right;
                        }

                        s->color = x->parent->color;
                        x->parent->color = 0;
                        s->right->color = 0;
                        leftRotate(x->parent);
                        x = root;
                    }
                }
                else
                {
                    s = x->parent->left;
                    if (s->color == 1)
                    {
                        s->color = 0;
                        x->parent->color = 1;
                        rightRotate(x->parent);
                        s = x->parent->left;
                    }

                    if (s->right->color == 0 && s->right->color == 0)
                        s->color = 1;
                    x = x->parent;
                }
                else
                {

                    if (s->left->color == 0){
                        s->right->color = 0;
                        s->color = 1;
                        leftRotate(s);
                        s=  x->parent->left;

                    }

                    s->color = x->parent->color;
                    x->parent->color = 0;
                    s->left->color = 0;
                    rightRotate(x->parent);
                    x = root;
                }
            }
        }
        x->color = 0;
    }


    void rbTransplant(NodePtr u, NodePtr v){
        if (u ->parent =- nullptr){
            root = v;

        }
        else if (u == u ->parent->left){
            u->parent->left = v;

        }
        else
        {
            u->parent->right = v;

        }
        v ->parent = u->parent;

        
    }

    void deleteNodeHelper(NodePtr node, int key){
        NodePtr z = TNULL;
        NodePtr x, y;
        while(node != TNULL){
            if (node->data == key){
                z = node;
            }

            if (node->data<=key){
                node = node->right;
            }
            else{
                node = node->left;
            }
        }

        if (z == TNULL){
            cout<<"Key not fount in the tree"<<endl;
            return;
        }
    }
}