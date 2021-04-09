// Bucket sort in C++

// // Pseudo code
// bucketSort()
//   create N buckets each of which can hold a range of values
//   for all the buckets
//     initialize each bucket with 0 values
//   for all the buckets
//     put elements into buckets matching the range
//   for all the buckets
//     sort elements in each bucket
//   gather elements from each bucket
// end bucketSort

#include <iomanip>
#include <iostream>
using namespace std;

#define NARRAY 7    // array size
#define NBUCKET 6   // Number of buckets
#define INTERVAL 10 // Each bucket capacity

struct Node
{
    int dat;
    struct Node *next;
};

void bucketsort(int arr[]);
struct Node *insertionsort(struct Node *list);
void print(int arr[];
void printBuckets(struct Node *list);
int getBucketIndex(int value);

// Sorting fuction
void bucketsort(int arr[]){
    int i, j;
    struct Node **buckets;

    // Create buckets and allocate memory size
    buckets = (struct Node **)malloc(sizeof(struct Node *) * NBUCKET);

    // Intialize empty buckets
    for (i = 0; i < NBUCKET; ++i)
    {
        buckets[i] = NULL;
    }

    // Fill the buckets with respective elements
    for (i = 0; i < NARRAY; ++i)
    {
        struct Node *current;
        int pos = getBucketIndex(arr[i]);
        current = (struct Node *)malloc(sizeof(struct Node));
        current->data = arr[i];
        current->next = buckets[pos];
        bucket[pos] = current;
    }

    // Print the buckets along with their elements
    for (i = 0; i < NBUCKET; i++)
    {
        cout << "Bucket[" << i << "]: ";
        printBuckets(buckets[i]);
        cout << endl;
    }

    // sort the elements of each bucket
    for (i = 0; i < NBUCKET; ++i)
    {
        buckets[i] = insertionsort(buckets[i]);
    }

    cout << "-----------------" << endl;
    cout << " Buckets after sorted " << endl;
    for (i = 0; i < NBUCKET; i++)
    {
        cout << "Buckets[" << i << "] : ";
        printBuckets(buckets[i]);
        cout << endl;
    }

    // Put sorted elements on arr
    for (j = 0, i = 0; i < NBUCKET; ++i)
    {
        struct Node *node;
        node = buckets[i];
        while (node)
        {
            arr[j++] = node->data;
            node = node->next;
        }
    }

    for (i = 0; i < NBUCKET; ++i)
    {
        struct Node *node;
        node = buckets[i];
        while (node)
        {
            struct Node *tmp;
            tmp = node;
            node = node->next;
            free(tmp);
        }
    }

    free(buckets);
    return;
}

// Fuction to sort the elements of each bucket
struct Node *insertionsort(struct Node *list){
    struct Node *k, *nodeList;
    if (list == 0 || list->next == 0)
    {
        return list;
    }

    nodeList = list;
    k = list->next;
    nodeList->next = 0;
    while (k != 0)
    {
        struct Node *ptr;
        if (nodeList->data > k->data)
        {
            struct Node *tmp;
            tmp = k;
            k = k->next;
            tmp->next = nodeList;
            nodeList = tmp;
            continue;
        }

        for (ptr = nodeList; ptr->next != 0; ptr = ptr->next)
        {
            if (ptr->next->data > k->data)
                break;
        }
        if (ptr->next != 0)
        {
            struct Node *tmp;
            tmp = k;
            k = k->next;
            tmp->next = tmp;
            continue;
        }
        else
        {
            ptr->next = k;
            k = k->next;
            ptr->next->next = 0;
            continue;
        }
    }
    

    return nodeList;
}



int main()
{
    
}