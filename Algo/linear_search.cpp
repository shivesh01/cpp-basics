// Linear search in C++
#include <iostream>
using namespace std;

int search(int array[], int key, int size)
{
    // Going through array sequencially
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int array[5] = {1, 4, 23, 49, 24};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 4;
    int result = search(array, key, size);

    (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}