// Selection Sort Algorithm

// Pseudocode
/* selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort */

#include <iostream>
using namespace std;

// Function to swap the position of two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print an array
void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Function to calculate no. of comparison
void no_of_comparision(int size)
{
    int comp = size * (size - 1) / 2;
    cout << "no. of comparision: " << comp;
}

void selectionsort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {

        int min_index = step;
        for (int i = step + 1; i < size; i++)
        {

            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[i] < array[min_index])
                min_index = i;
        }

        // put min at the correct position
        swap(&array[min_index], &array[step]);
    }
}

// Driver code
int main()
{
    int data[] = {20, 12, 10, 15, 2, 39, 43, 32, 42};
    int size = sizeof(data) / sizeof(data[0]);
    selectionsort(data, size);
    cout << "Sorted array in Ascending Order:\n";
    printarray(data, size);
    no_of_comparision(size);
}
