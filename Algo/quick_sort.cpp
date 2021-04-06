// Quick sort in C++

// Pseudo Code

// quickSort(array, leftmostIndex, rightmostIndex)
//   if (leftmostIndex < rightmostIndex)
//     pivotIndex <- partition(array,leftmostIndex, rightmostIndex)
//     quickSort(array, leftmostIndex, pivotIndex - 1)
//     quickSort(array, pivotIndex, rightmostIndex)

// partition(array, leftmostIndex, rightmostIndex)
//   set rightmostIndex as pivotIndex
//   storeIndex <- leftmostIndex - 1
//   for i <- leftmostIndex + 1 to rightmostIndex
//   if element[i] < pivotElement
//     swap element[i] and element[storeIndex]
//     storeIndex++
//   swap pivotElement and element[storeIndex+1]
// return storeIndex + 1

#include <iostream>
using namespace std;

// function to swap elements
void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to print the array
void printarray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << array[i] << " ";
        cout << endl;
    }
}

// function to rearrange array (find the partition point)
int partition(int array[], int low, int high)
{

    // select the rightmost element as pivot
    int pivot = array[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {

            // if element smaller than pivot is found
            // swap it with the greater elment pointed by i
            i++;

            // swap element at i with elements at j
            swap(&array[i], &array[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(&array[i + 1], &array[high]);

    // return the partition point
    return (i + 1);
}

void quicksort(int array[], int low, int high)
{
    if (low < high)
    {

        // find the pivot element such that
        // elements smaller than pivot are on the left of pivot
        // elements greater than pivot are on the right of pivot

        int pi = partition(array, low, high);

        // recursive call on the left of pivot
        quicksort(array, low, pi - 1);

        // recursive call on the right of pivot
        quicksort(array, pi + 1, high);
    }
}

// Driver code
int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";
    printarray(data, n);

    // perform quicksort on data
    quicksort(data, 0, n - 1);

    cout << "Sorted array in ascending order: \n";
    printarray(data, n);
}