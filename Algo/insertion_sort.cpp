// Insertion Sort in C++
#include <iostream>
using namespace std;

// pseudo code

//   mark first element as sorted
//   for each unsorted element X
//     'extract' the element X
//     for j <- lastSortedIndex down to 0
//       if current element j > X
//         move sorted element to the right by 1
//     break loop and insert X here
// end insertionSort

// Function to print an array
void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionsort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;

        // Compare key with each element on the left of it until an element smaller than
        // it is found
        // for descending order, change key<array[j] to key>array[j].
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

// Driver Code
int main()

{
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]);
    insertionsort(data, size);
    cout << "Sorted array in ascending order:\n";
    printarray(data, size);
}