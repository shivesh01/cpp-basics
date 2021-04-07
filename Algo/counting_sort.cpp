// Counting sort in C++
#include <iostream>
using namespace std;

void countsort(int array[], int size)
{
    // The size of count must be at atleast the (max+1) but
    // we cannot assign declare it as int count(max+1) in C++ as
    // it does not support dynamic memory allocation.
    // so, its size is provided statically.
    int output[10];
    int count[10];
    int max = array[0];

    // Find the largest element of the array
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    // Initialize count array with all zeros.
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }

    // Store the count of each element
    for (int i = 0; i < size; i++)
    {
        count[array[i]]++; // pretty cool
    }

    // Store the cummulative count of each array
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    // Find the index of each element of the original array in count array, and
    // place the elements in output array
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    // Copy the sorted elements into original array
    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
}

// Function to print an array
void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int array[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(array) / sizeof(array[0]);
    countsort(array, n);
    printarray(array, n);
}