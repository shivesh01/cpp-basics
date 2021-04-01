// Bubble-sort in C++

// PseudoCode

// bubbleSort(array)
//   for i <- 1 to indexOfLastUnsortedElement-1
//     if leftElement > rightElement
//       swap leftElement and rightElement
// end bubbleSort

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{

    // Run loops two times: one for walking thoughout the array
    // and the other for comparison
    for (int step = 0; step < size - 1; ++step)
    {
        for (int i = 0; i < size - step - 1; ++i)
        {

            // To sort in descending order, chang > to < in this line.
            if (array[i] > array[i + 1])
            {

                // Swap if greater is at the rear position
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// function to print the array
void printArray(int array[], int size)
{
    {
        for (int i = 0; i < size; ++i)
            cout << " " << array[i];
    }
    cout << "\n";
}

// Driver Code
int main()
{
    int data[] = {-2, 45, 0, 11, -9};

    // sizeof(arr) = 20 bytes.
    // sizeof(arr[0]) = 4 bytes

    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    cout << "Sorted Array in Ascending Order: \n";
    printArray(data, size);
}