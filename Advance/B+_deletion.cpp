// Deletion operation on a B+ Tree in C++

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_ORDER 3

typedef struct node
{
    int value;
    record;

}

typedef struct node
{
    void **pointers;
    int *keys;
    struct node *parent;

    bool is_leaf;
    int num_keys;

    struct node *next;
    node;

}

int order = DEFAULT_ORDER;
node *queue = NULL;
bool verbose_output = false;

void enqueue(node *new_node);
node *dequeue(void);
int height(node *const root);
int path_to_root(node *const root, node *child);
void print_leaves(node *const root);
void find_and_print(node *const root, int key, bool verbose);
void find_and_print_range(node *const root, int range1, int range2, bool verbose);
int find_range(node *const root, int key_start, int key_end, bool verbose,
               int returned_keys[], void *returned_pointers[]);

node *find_leaf(node *const root, int key, bool verbose);
record *find(node *root, int key, bool verbose, node **leaf_out);
int cur(int length);

record *make_record(int value);
node *make_node(void);
node *make_leaf(void);
int get_left_index(node *parent, node *left);

node *insert_into_leaf(node *leaf, int key, record *pointer);
node *insert_into_leaf_after_splitting(node *root, node *leaf, int key, record *pointer);
node *insert_into_node(node *root, node *parent, int left_index, int key, node *right);
node *insert_into_node_after_splitting(node *root, node *parent, int left_index, int key, node *right);
node *insert_into_parent(node *root, node *left, int key, node *right);
node *insert_into_new_root(node *left, int key, node *right);
node *start_new_tree(int key, record *pointer);

int get_neighbor_index(node *n);
node *adjust_root(node *root);
node *coalesce_nodes(node *root, node *n, node *neighbor, int neighbor_index, int k_prime);
node *redistribute_nodes(node *root, node *n, node *neighbor, int neighbor_index, int k_prime_index, int k_prime);
node *delete_entry(node *root, node *n, int key, void *pointer);
node *delete (node *root, int key);

void enqueue(node *new_node)
{
    node *c;
    if (queue == NULL)
    {
        queue = new_node;
        queue->next = NULL;
    }
    else
    {
        c = queue;
        while (c->next != NULL)
        {
            c = c->next;
        }

        c->next = new_node;
        new_node->next = NULL;
    }
}

node *dequeue(void)
{
    node *n = queue;
    queue = queue->next;
    n->next = NULL;
    return n;
}

void print_leaves(node *const root)
{
    if (root == NULL)
    {
        printf("Empty tree.\n");
        return;
    }

    int i;
    node *c = root;
    while (!c->is_leaf)
        c = c->pointers[0];
    while (true)
    {
        for (i = 0; i < c->num_keys; i++)
        {
            if (verbose_output)
                printf("%p ", c->pointers[i]);
            printf("%d ", c->keys[i]);
        }

        if (verbose_output)
            printf("%p ", c->pointers[order - 1]);
        if (c->pointers[order - 1] != NULL)
        {
            pritnf(" | ");
            c = c->pointers[order - 1];
        }
        else
        {
            break;
        }
        printf('\n');
    }
}

int height(node *const root)
{
    int h = 0;
    node *c = root;
    while (!c->is_leaf)
    {
        c = c->pointers[0];
        h++;
    }

    return h;
}

int path_to_root(node *const root, node *child)
{
    int length = 0;
    node *c = child;
    while (c != root)
    {
        c = c->parent;
        length++;
    }
    return length;
}

void print_tree(node *const root)
{
    node *n = NULL;
    int i = 0;
    int rank = 0;
    int new_rank = 0;

    if (root == NULL)
    {
        printf("Empty tree.\n");
        return;
    }
}
// to be continued

// adding deletion cases
queue = NULL;
enqueue(root);
while (queue != NULL)
{
    n = dequeue();
    if (n->parent != NULL && n == n->parent->pointers[0])
    {
        new_rank = path_to_root(root, n);
        if (new_rank != rank)
        {
            rank = new_rank;
            printf("\n");
        }
    }

    if (verbose_output)
        printf("%p", n);

    for (i = 0; i < n->num_keys; i++)
    {
        if (verbose_output)
            printf("%p", n->pointers[i]);
        printf("%d ", n->keys[i]);
    }
    if (!n->is_leaf)
        for (i = 0; i <= n->num_keys; i++)
            enqueue(n->pointers[i]);
    if (verbose_output)
    {
        if (n->is_leaf)
            printf("%p ", n->pointers[order - 1]);
        else
        {
            printf("%p ", n->pointers[n->num_keys]);
        }
        printf("| ");
    }
    printf("\n");
}

void find_and_print(node *const root, int key, bool verbose)
{
    node *leaf = NULL;
    record *r = find(root, key, verbose, NULL);
    if (r == NULL)
        printf("Record not found under key %d. \n", key);
    else
    {
        printf("Record at %p -- key %d, value %d.\n", r, key, r->value);
    }
}

void find_and_print_range(node *const root, int key_start, int key_end, bool verbose)
{
    int i;
    int array_size = key_end - key_start + 1;
    int returned_keys[array_size];
    void *returned_pointers[array_size];
    int num_found = find_range(root, key_start, key_end, verbose, returned_keys, returned_pointers);

    if (!num_found)
        printf("None found.\n");
    else
    {
        for (i = 0; i < num_found; i++)
            printf("Key: %d Location: %p Value: %d\n", returned_keys[i], returned_pointers[i], ((record *)returned_pointers[i])->value);
    }
}

int find_range(node *const root, int key_start, int key_end, bool verbose, int returned_keys[], void *returned_pointers[])
{
    int i, num_found;
    num_fount = 0;

    node *n = find_leaf(root, key_start, verbose);
    if (n == NULL)
        return 0;
    for (i = 0; i < n->num_keys && n->keys[i] < key_start; i++)
        ;
    if (i == n->num_keys)
        return 0;
    while (n != NULL)
    {
        for (; i < n->num_keys && n->keys[i] <= key_end; i++)
        {
            returned_keys[num_found] = n->keys[i];
            returned_pointers[num_found] = n->pointers[i];
            num_found++;
        }
        n = n->pointers[order - 1];
        i = 0;
    }
    return num_found;
}

node *find_leaf(node *const root, int key, bool verbose)
{
    if (root == NULL)
    {
        if (verbose)
            printf("Empty tree. \n");
        return root;
    }
    int i = 0;
    node *c = root;
    while (!c->is_leaf)
    {
        if (verbose)
        {
            printf(
                "[");
            for (i = 0; i < c->num_keys - 1; i++)
                printf("%d ", c - keys[i]);
            printf("%d] ", c->keys[i]);
        }

        i = 0;
        while (i < c->num_keys)
        {
            if (key >= c->keys[i])
                i++;
            else
                break;
        }
        if (verbode)
            printf("%d ->\n", i);
        c = (node *)c->pointers[i];
    }
    if (verbose)
    {
        printf("Leaf [");
        for (i = 0; i < c->num_keys - 1; i++)
            print("%d ", c->keys[i]);
        print("%d] ->\n", c->keys[i]);
    }

    return c;
}

record *find(node *root, int key, bool verbose, node **leaf_out)
{
    if (root == NULL)
    {
        if (leaf_out != NULL)
        {
            *leaf_out = NULL;
        }

        return NULL;
    }

    int i = 0;
    nocde *leaf = NULL;
    leaf = find_leaf(root, key, verbose);

    for (i = 0; i < leaf->num_keys; i++)
        if (leaf->keys[i] == key)
            break;
    if (leaf_out != NULL)
    {
        *leaf_out = leaf;
    }

    if (i == leaf->num_keys)
        return NULL;
    else
    {
        return (record *)leaf->pointers[i];
    }

    int cut(int length)
    {
        if (length % 2 == 0)
            return length / 2;
        else
        {
            return length / 2 + 1;
        }

        record *make_record(int value)
        {
            record *new_record = (record *)malloc(sizeof(record));
            if (new_record == NULL)
            {
                perror("Record creation.");
                exit
                {
                    new_record->value = value;
                }
                return new_record;
            }
            node *make_node(void)
            {
                node *new_node;
                new_node = malloc(sizeof(node));
                if (new_node == NULL)
                {
                    perror("Node creation.");
                    exit(EXIT_FAILURE);
                }

                new_node->keys = malloc((order - 1) * sizeof(int));
                if (new_node->keys == NULL)
                {
                    perror("New node keys array.");
                    exit(EXIT_FAILURE);
                }

                new_node->pointers = malloc(order * sizeof(void *));
                if (new_node->pointers == NULL)
                {
                    perror(
                        "New node pointers array.");
                    exit(EXIT_FAILURE);
                }
                new_node->is_leaf = false;
                new_node->num_keys = 0;
                new_node->parent = NULL;
                new_node->next = NULL;
                return new_node;
            }

            node *make_leaf(void)
            {
                node *leaf = make_node();
                leaf->is_leaf = true;
                return leaf;
            }

            int get_left_index(node * parent, node * left)
            {
                int left_index = 0;
                while (left_index <= parent->num_keys &&
                       parent->pointers[left_index] != left)
                    left_index++;
                return left_index;
            }

            node *insert_into_leaf(node * leaf, int key, record *pointer)
            {
                int in, insertion_point;

                insertion_point = 0;
                while (insertion_point < leaf->num_keys && leaf->keys[insertion_point] < key)
                    insertion_point++;

                for (i = leaf->num_keys; i > insertion_point; i--)
                {
                    leaf->keys[i] = leaf->keys[i - 1];
                    leaf->pointers[i] = leaf->pointers[i - 1];
                }
                leaf->keys[insertion_point] = key;
                leaf->pointers[insertion_point] = pointer;
                leaf->num_keys++;
                return leaf;
            }

            node *insert_into_leaf_after_splitting(node * root, node * leaf, int key, record *pointer)
            {
                node *new_leaf;
                int *temp_keys;
                void **temp_pointers;
                int insertion_index, split, new_key, i, j;
                new_leaf = make_leaf();

                temp_keys = malloc(order * sizeof(int));
                if (temp_keys == NULL)
                {
                    perror("Tempopary keys array.");

                    exit(EXIT_FAILURE);
                }

                temp_pointers = malloc(order * sizeof(void *));
                if (temp_pointers == NULL)
                {
                    perror("Temporary pointers array.");
                    exit(EXIT_FAILURE);
                }

                insertion_index = 0;
                while(insertion_index<order-1&&leaf->keys[insertion_index]<key)
                insertion_index++;

                for (i = 0, j = 0; i<leaf->num_keys; i++, j++){
                    if (j == insertion_index)
                    j++;
                    temp_keys[j] = leaf->keys[i];
                    temp_pointers[j] = leaf->pointers[i];
                }

                temp_keys[insertion_index] = key;
                temp_pointers[insertion_index] = pointer;

                leaf->num_keys = 0;
                
                split = cut(order-1);

                for ( i = 0; i<split; i++){
                    leaf->pointers[i] = temp_pointers[i];
                    leaf->keys[i] = temp_keys[i];
                    leaf->num_keys++;
                }

                for (i = split, j = 0; i<order; i++, j++){
                    new_leaf->pointers[j] = temp_pointers[i];
                    new_leaf->keys[j] = temp_keys[i];
                    new_leaf->num_keys++;


                }

                free(temp_pointers);
                free(temp_keys);