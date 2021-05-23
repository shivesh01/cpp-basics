#include <stdio.h>
#define size 7
int arr[size];

void init()
{
    // Intially every buckets are empty (-1)
    int i;
    for (i = 0; i < size; i++)
        arr[i] = -1;
}

void insert(int value)
{
    int key = value % size;
    if (arr[key] == -1)
    {
        arr[key] = value;
        printf("%d inserted at arr[%d]\n", value, key);
    }
    else
    {
        printf("Collision : arr[%d] has element %d already !\n", key, arr[key]);
        printf("Unable to insert %d\n", value);
    }
}

void del(int value)
{
    int key = value % size;
    if (arr[key] == value)
        arr[key] = -1;
    else

        printf("%d not present in the hash table\n", value);
}

void search(int value)
{
    int key = value % size;
    if (arr[key] == value)
        printf("Search Found\n");
    else

        printf("Search not found\n");
}
void print()
{
    int i;
    for (i = 0; i < size; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
}

int main()
{
    init();
    insert(10);
    insert(4);
    insert(2);
    insert(3);

    printf("Hash table\n");
    print();
    printf("\n");

    printf("Deleting value 10..\n ");
    del(10);
    printf("After the deletion hash table\n");
    print();
    printf("\n");

    printf("Deleting value 5...\n");
    del(5);
    printf("After the deletion hash table\n ");
    print();
    printf("\n");

    printf("Searching value 4..\n");
    search(4);
    printf("Searching value 10..\n");
    search(10);
    return 0;
}
