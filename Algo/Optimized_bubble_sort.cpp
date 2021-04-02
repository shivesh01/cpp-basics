// Optimized bubble sort in C++

#include <iostream>
using namespace std;

void bubblesort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {

        // Run loops two times: one for walking throughtout the Array
        // and the other for comparison

        int swapped = 0;

        for (int i = 0; i < size - step - 1; ++i)
        {
            // To sort in descending order, change > to <  int this line.
            if (array[i] > array[i + 1])
            {

                // Swap if greater is at the rear position
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }

        // If there is not swapping in the last swap, then the array is already sorted.
        if (swapped == 0)
            break;
    }
}

// Function to print the array

void Printarray(int array[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        cout << " " << array[i];
    }
    cout << "\n";
}

// Driver Code
int main()
{

    int data[] = {1, 2, 4, 5, 6};
    int size = sizeof(data) / sizeof(data[0]);
    bubblesort(data, size);
    cout << "Sorted array in the ascending order";
    Printarray(data, size);
}